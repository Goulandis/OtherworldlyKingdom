#include "GOpenCVMediaTool.h"

DEFINE_LOG_CATEGORY(GOpenCV);

AGOpenCVMediaTool::AGOpenCVMediaTool()
{
	PrimaryActorTick.bCanEverTick = true;

}
UTexture2D* AGOpenCVMediaTool::MatToTexture2D(cv::Mat& InMat)
{
	//获取图片的宽
	int32 Width = InMat.cols;
	//获取图片的高
	int32 Height = InMat.rows;
	if (Width == 0 || Height == 0)
	{
		UE_LOG(GOpenCV, Error, TEXT("The cv::Mat resource is not available"));
		return nullptr;
	}
	cv::Mat OutMat;
	//颜色空间转换，从opencv默认的RGB颜色空间转换到UE的带Alpha通道的RGBA颜色空间
	cv::cvtColor(InMat, OutMat, cv::COLOR_RGB2RGBA);
	//根据图片大小创建贴图
	NewTexture = UTexture2D::CreateTransient(Width, Height);
	//NewTexture->SRGB = 1;
	int DataSize = Width * Height * 4;
	//获取贴图内存空间，对内存操作需要上锁
	void* Datas = NewTexture->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
	//将opencv图片数据拷贝到贴图内存空间
	FMemory::Memmove(Datas, OutMat.data, DataSize);
	NewTexture->PlatformData->Mips[0].BulkData.Unlock();
	//更新贴图资源
	NewTexture->UpdateResource();
	return NewTexture;
}
UTexture2D* AGOpenCVMediaTool::GetTexture2DFromMatByPath(FString Path)
{
	cv::String cvPath = TCHAR_TO_UTF8(*Path);
	//从路径加载图片
	cv::Mat Image = cv::imread(cvPath);
	return MatToTexture2D(Image);
}
bool AGOpenCVMediaTool::ReadVideo(FString Path)
{
	cv::String cvPath = TCHAR_TO_UTF8(*Path);
	//读取视频文件
	Capture.open(cvPath);
	//判断视频文件是否被成功读取
	if (!Capture.isOpened())
	{
		UE_LOG(GOpenCV, Error, TEXT("Could not read this video %s"), *Path);
		return false;
	}
	return true;
}
UTexture2D* AGOpenCVMediaTool::ReadVideoFrame()
{
	cv::Mat VideoFrame;
	Capture.read(VideoFrame);
	if (VideoFrame.empty())
	{
		return nullptr;
	}
	NewTexture = MatToTexture2D(VideoFrame);
	cv::waitKey((int32)1000 / (int32)Capture.get(cv::CAP_PROP_FPS));
	return NewTexture;
}
bool AGOpenCVMediaTool::ReadStitchingVideo(FString CapLeftPath, FString CapRightPath)
{
	cv::String cvCapLeftPath = TCHAR_TO_UTF8(*CapLeftPath);
	cv::String cvCapRightPath = TCHAR_TO_UTF8(*CapRightPath);
	CapLeft.open(cvCapLeftPath);
	CapRight.open(cvCapRightPath);
	if (!CapLeft.isOpened() || !CapRight.isOpened())
	{
		UE_LOG(GOpenCV, Error, TEXT("Could not read this video %s or %s"), *CapLeftPath, *CapRightPath);
		return false;
	}
	return true;
}
UTexture2D* AGOpenCVMediaTool::VideoStitching()
{
	//存储拼接后的新图像
	cv::Mat NewCapMat;
	//存储要拼接的图像
	cv::Mat CapLeftMat;
	cv::Mat CapRightMat;
	//读取视频图像
	CapLeft.read(CapLeftMat);
	CapRight.read(CapRightMat);
	if (CapLeftMat.empty() || CapRightMat.empty())
	{
		return nullptr;
	}
	//初始化拼接后的图像尺寸
	NewCapMat = cv::Mat::zeros(CapLeftMat.rows, CapLeftMat.cols + CapRightMat.cols, CapLeftMat.type());
	//计算要拼接的图像在新图像中的位置范围
	cv::Rect CapLeftRect(0, 0, CapLeftMat.cols, CapLeftMat.rows);
	cv::Rect CapRightRect(CapLeftMat.cols, 0, CapRightMat.cols, CapRightMat.rows);
	//将要拼接的图像资源拷贝到新图像的对应位置上
	CapLeftMat.copyTo(NewCapMat(CapLeftRect));
	CapRightMat.copyTo(NewCapMat(CapRightRect));
	//将新图像转换为贴图资源
	NewTexture = MatToTexture2D(NewCapMat);
	//设置播放帧率
	cv::waitKey((int32)(1000 / (int32)CapLeft.get(cv::CAP_PROP_FPS)));
	return NewTexture;
}
void AGOpenCVMediaTool::BeginPlay()
{
	Super::BeginPlay();
	
}
void AGOpenCVMediaTool::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Capture.release();
	CaptureWriter.release();
	CapLeft.release();
	CapRight.release();
}
void AGOpenCVMediaTool::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

