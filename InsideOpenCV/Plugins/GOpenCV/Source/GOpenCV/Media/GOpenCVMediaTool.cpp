#include "GOpenCVMediaTool.h"

DEFINE_LOG_CATEGORY(GOpenCV);

AGOpenCVMediaTool::AGOpenCVMediaTool()
{
	PrimaryActorTick.bCanEverTick = true;

}
UTexture2D* AGOpenCVMediaTool::MatToTexture2D(cv::Mat& InMat)
{
	//��ȡͼƬ�Ŀ�
	int32 Width = InMat.cols;
	//��ȡͼƬ�ĸ�
	int32 Height = InMat.rows;
	if (Width == 0 || Height == 0)
	{
		UE_LOG(GOpenCV, Error, TEXT("The cv::Mat resource is not available"));
		return nullptr;
	}
	cv::Mat OutMat;
	//��ɫ�ռ�ת������opencvĬ�ϵ�RGB��ɫ�ռ�ת����UE�Ĵ�Alphaͨ����RGBA��ɫ�ռ�
	cv::cvtColor(InMat, OutMat, cv::COLOR_RGB2RGBA);
	//����ͼƬ��С������ͼ
	NewTexture = UTexture2D::CreateTransient(Width, Height);
	//NewTexture->SRGB = 1;
	int DataSize = Width * Height * 4;
	//��ȡ��ͼ�ڴ�ռ䣬���ڴ������Ҫ����
	void* Datas = NewTexture->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
	//��opencvͼƬ���ݿ�������ͼ�ڴ�ռ�
	FMemory::Memmove(Datas, OutMat.data, DataSize);
	NewTexture->PlatformData->Mips[0].BulkData.Unlock();
	//������ͼ��Դ
	NewTexture->UpdateResource();
	return NewTexture;
}
UTexture2D* AGOpenCVMediaTool::GetTexture2DFromMatByPath(FString Path)
{
	cv::String cvPath = TCHAR_TO_UTF8(*Path);
	//��·������ͼƬ
	cv::Mat Image = cv::imread(cvPath);
	return MatToTexture2D(Image);
}
bool AGOpenCVMediaTool::ReadVideo(FString Path)
{
	cv::String cvPath = TCHAR_TO_UTF8(*Path);
	//��ȡ��Ƶ�ļ�
	Capture.open(cvPath);
	//�ж���Ƶ�ļ��Ƿ񱻳ɹ���ȡ
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
	//�洢ƴ�Ӻ����ͼ��
	cv::Mat NewCapMat;
	//�洢Ҫƴ�ӵ�ͼ��
	cv::Mat CapLeftMat;
	cv::Mat CapRightMat;
	//��ȡ��Ƶͼ��
	CapLeft.read(CapLeftMat);
	CapRight.read(CapRightMat);
	if (CapLeftMat.empty() || CapRightMat.empty())
	{
		return nullptr;
	}
	//��ʼ��ƴ�Ӻ��ͼ��ߴ�
	NewCapMat = cv::Mat::zeros(CapLeftMat.rows, CapLeftMat.cols + CapRightMat.cols, CapLeftMat.type());
	//����Ҫƴ�ӵ�ͼ������ͼ���е�λ�÷�Χ
	cv::Rect CapLeftRect(0, 0, CapLeftMat.cols, CapLeftMat.rows);
	cv::Rect CapRightRect(CapLeftMat.cols, 0, CapRightMat.cols, CapRightMat.rows);
	//��Ҫƴ�ӵ�ͼ����Դ��������ͼ��Ķ�Ӧλ����
	CapLeftMat.copyTo(NewCapMat(CapLeftRect));
	CapRightMat.copyTo(NewCapMat(CapRightRect));
	//����ͼ��ת��Ϊ��ͼ��Դ
	NewTexture = MatToTexture2D(NewCapMat);
	//���ò���֡��
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

