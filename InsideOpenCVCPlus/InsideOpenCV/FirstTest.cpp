#include<opencv2/opencv.hpp>
#include<opencv2/dnn/dnn.hpp>
#include <opencv2/core/hal/interface.h>
#include<iostream>
#include<string>

//using namespace cv;

int TipIds[] = { 4,8,12,16,20 };
int nPoints = 21;

void ImageThreshold(cv::String path)
{
    cv::Mat Image = cv::imread(path);
    cv::imshow("Image", Image);
}

void VideoThreshold(cv::String path)
{
    cv::VideoCapture Capture;
    Capture.open(path);
    if (!Capture.isOpened())
    {
        std::cout << "could not read this video " << path << std::endl;
        return;
    }
    cv::Size VideoSize = cv::Size((int)Capture.get(cv::CAP_PROP_FRAME_WIDTH), (int)Capture.get(cv::CAP_PROP_FRAME_HEIGHT));
    int Fps = Capture.get(cv::CAP_PROP_FPS);
    cv::VideoWriter writer("D:/Goulandis/EdgeDonwload/361.mp4", cv::CAP_OPENCV_MJPEG, Fps, VideoSize, true);
    cv::Mat Video;
    cv::namedWindow("Video", cv::WINDOW_NORMAL);
    while (Capture.read(Video))
    {       
        writer.write(Video);
        cv::imshow("Video", Video);
        char key = cv::waitKey(int(1000 / Fps));
        if (key == 27)
        {
            cv::destroyAllWindows();
            break;
        }
    }
    Capture.release();
    writer.release();
}

void VideoStitching()
{
    cv::VideoCapture CapLeft;
    cv::VideoCapture CapRight;
    CapLeft.open("D:/Goulandis/EdgeDonwload/PartitionLeft.mp4");
    CapRight.open("D:/Goulandis/EdgeDonwload/PartitionRight.mp4");
    if (!CapLeft.isOpened() || !CapRight.isOpened())
    {
        return;
    }
    /*cv::Size CapLeftSize = cv::Size((int)CapLeft.get(cv::CAP_PROP_FRAME_WIDTH), (int)CapLeft.get(cv::CAP_PROP_FRAME_HEIGHT));
    cv::Size CapRightSize = cv::Size((int)CapRight.get(cv::CAP_PROP_FRAME_WIDTH), (int)CapRight.get(cv::CAP_PROP_FRAME_HEIGHT));*/
    int CapLeftFps = CapLeft.get(cv::CAP_PROP_FPS);
    int CapRightFps = CapRight.get(cv::CAP_PROP_FPS);
    int NewCapFps = (int)(CapLeftFps + CapRightFps) / 2;
    /*cv::Size NewCapSize = cv::Size(CapLeftSize.width + CapRightSize.width, CapLeftSize.height);
    cv::VideoWriter Writer("D:/Goulandis/EdgeDonwload/NewCap.mp4", cv::CAP_OPENCV_MJPEG, NewCapFps, NewCapSize, true);*/

    cv::Mat NewCapMat;
    cv::Mat CapLeftMat;
    cv::Mat CapRightMat;
    cv::namedWindow("VideoStitching", cv::WINDOW_AUTOSIZE);
    while (CapLeft.read(CapLeftMat) && CapRight.read(CapRightMat))
    {
        NewCapMat = cv::Mat::zeros(CapLeftMat.rows, CapLeftMat.cols + CapRightMat.cols, CapLeftMat.type());
        cv::Rect CapLeftRect(0,0,CapLeftMat.cols,CapLeftMat.rows);
        cv::Rect CapRightRect(CapLeftMat.cols, 0, CapRightMat.cols, CapRightMat.rows);
        CapLeftMat.copyTo(NewCapMat(CapLeftRect));
        CapRightMat.copyTo(NewCapMat(CapRightRect));
        //Writer.write(CapRightMat);
        cv::imshow("VideoStitching", NewCapMat);
        char key = cv::waitKey(int(1000 / NewCapFps));
        if (key == 27)
        {
            cv::destroyAllWindows();
            break;
        }
    }
    CapLeft.release();
    CapRight.release();
    //Writer.release();
}

bool HandKeyPointsDetect(cv::Mat Mat, std::vector<cv::Point>& HandKeyPoints)
{
    int Width = Mat.cols;
    int Height = Mat.rows;
    float Ratio = Width / (float)Height;
    int ModelHeight = 368;
    int ModelWidth = int(Ratio * ModelHeight);

    cv::String ModelFile = "E:/Goulandis/OtherworldlyKingdom/InsideOpenCV/Plugins/GOpenCV/Resources/OpenPose/pose_deploy.prototxt";
    cv::String ModelWeight = "E:/Goulandis/OtherworldlyKingdom/InsideOpenCV/Plugins/GOpenCV/Resources/OpenPose/pose_iter_102000.caffemodel";

    cv::dnn::Net Net = cv::dnn::readNetFromCaffe(ModelFile, ModelWeight);
    cv::Mat Blob = cv::dnn::blobFromImage(Mat, 1.0 / 255, cv::Size(ModelWidth, ModelHeight), cv::Scalar(0, 0, 0));
    Net.setInput(Blob, "image");
    cv::Mat OutputMat = Net.forward();
    int OutputMatHeight = OutputMat.size[2];
    int OutputMatWidth = OutputMat.size[3];
    for (int i = 0; i < nPoints; ++i)
    {
        cv::Mat PropMap(OutputMatHeight, OutputMatWidth, CV_32F, OutputMat.ptr(0, i));
        cv::resize(PropMap, PropMap, cv::Size(Width, Height));
        cv::Point KeyPoint;
        double ClassProb;
        cv::minMaxLoc(PropMap, NULL, &ClassProb, NULL, &KeyPoint);
        HandKeyPoints[i] = KeyPoint;
    }
    //cv::imshow("HandPoseDetect", OutputMat);
    return true;
}

bool HandPoseRecognition(std::vector<cv::Point>& HandKeyPoints, int& Num)
{
    std::vector<int> Fingers;
    
    if (HandKeyPoints[TipIds[0]].x > HandKeyPoints[TipIds[0] - 1].x)
    {
        Fingers.push_back(1);
    }
    else
    {
        Fingers.push_back(0);
    }
    for (int i = 1; i < 5; ++i)
    {
        if (HandKeyPoints[TipIds[i]].y < HandKeyPoints[TipIds[i] - 2].y)
        {
            Fingers.push_back(1);
        }
        else
        {
            Fingers.push_back(0);
        }
    }
    for (int i = 0; i < Fingers.size(); ++i)
    {
        if (Fingers[i] == 1)
        {
            Num++;
        }
    }
    return true;
}

bool ShowHandPoseRecognitionResult(cv::Mat& Mat, std::vector<cv::Point>& HandKeyPoints, int& Num)
{
    for (int i = 0; i < nPoints; ++i)
    {
        cv::circle(Mat, HandKeyPoints[i], 3, cv::Scalar(0, 0, 255), -1);
        cv::putText(Mat, std::to_string(i), HandKeyPoints[i], cv::FONT_HERSHEY_COMPLEX, 0.8, cv::Scalar(0, 255, 0), 2);
    }
    std::vector<std::string> ImageList;
    std::string FileName = "E:/Goulandis/CPlus/InsideOpenCV/HandPosePics/";
    cv::glob(FileName, ImageList);
    std::vector<cv::Mat> Temp;
    for (int i = 0; i < ImageList.size(); ++i)
    {
        cv::Mat TempMat = cv::imread(ImageList[i]);
        cv::resize(TempMat, TempMat, cv::Size(100, 100), 1, 1, cv::INTER_AREA);
        Temp.push_back(TempMat);
    }
    Temp[Num].copyTo(Mat(cv::Rect(0, Mat.rows - Temp[Num].rows, Temp[Num].cols, Temp[Num].rows)));
    cv::putText(Mat, std::to_string(Num), cv::Point(20, 60), cv::FONT_HERSHEY_COMPLEX, 2, cv::Scalar(0, 0, 128), 3);
    return true;
}

void HandPoseRecognitionExample()
{
    /*cv::String HandImage = "D:/Goulandis/Pics/HandImage.jpg";
    cv::Mat Mat = cv::imread(HandImage);
    std::vector<cv::Point> HandKeyPoints(21);
    HandKeyPointsDetect(Mat,HandKeyPoints);
    for (cv::Point Point : HandKeyPoints)
    {
        std::cout << "X:" << Point.x << ",Y:" << Point.y << std::endl;
    }
    system("pause");*/

    std::vector<std::string> ImageList;
    std::string FileName = "E:/Goulandis/CPlus/InsideOpenCV/HandPoseInputPics/";
    cv::glob(FileName, ImageList);
    std::vector<cv::Mat> Images;
    for (int i = 0; i < ImageList.size(); ++i)
    {
        cv::Mat HandPoseMat = cv::imread(ImageList[i]);
        std::vector<cv::Point> HandKeyPoints(nPoints);
        HandKeyPointsDetect(HandPoseMat, HandKeyPoints);
        int Num = 0;
        HandPoseRecognition(HandKeyPoints, Num);
        ShowHandPoseRecognitionResult(HandPoseMat, HandKeyPoints, Num);
        cv::imshow("HandPose", HandPoseMat);
        cv::waitKey(13);
    }
}

void RunDemo(int pId)
{
    switch (pId)
    {
        case 0:
            ImageThreshold("D:/Goulandis/Pics/1.png");
        case 1:
            VideoThreshold("D:/Goulandis/EdgeDonwload/360.mp4");
        case 2:
            VideoStitching();
        case 3:
            HandPoseRecognitionExample();
    }
}

int main() 
{
    RunDemo(3);
    return 0;
}