#pragma once
#include "opencv2/core/mat.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
#include "Logging/LogMacros.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GOpenCVMediaTool.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(GOpenCV, All, All);

UCLASS()
class GOPENCV_API AGOpenCVMediaTool : public AActor
{
	GENERATED_BODY()
private:
	cv::VideoCapture Capture;
	cv::VideoCapture CapLeft;
	cv::VideoCapture CapRight;
	cv::VideoWriter CaptureWriter;
	UTexture2D* NewTexture;
public:	
	AGOpenCVMediaTool();
	UTexture2D* MatToTexture2D(cv::Mat& InMat);
	UFUNCTION(BlueprintCallable, Category = "OpenCV")
	UTexture2D* GetTexture2DFromMatByPath(FString Path);
	UFUNCTION(BlueprintCallable, Category = "OpenCV")
	bool ReadVideo(FString Path);
	UFUNCTION(BlueprintCallable, Category = "OpenCV")
	UTexture2D* ReadVideoFrame();
	UFUNCTION(BlueprintCallable, Category = "OpenCV")
	bool ReadStitchingVideo(FString CapLeftPath, FString CapRightPath);
	UFUNCTION(BlueprintCallable, Category = "OpenCV")
	UTexture2D* VideoStitching();
protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
public:	
	virtual void Tick(float DeltaTime) override;

};
