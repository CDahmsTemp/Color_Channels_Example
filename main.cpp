// main.cpp

#include<opencv2/opencv.hpp>

#include<iostream>
#include<conio.h>           // may have to modify this line if not using Windows

///////////////////////////////////////////////////////////////////////////////////////////////////
int main() {

    // open the original image, show an error message and bail if not successful
    cv::Mat imgOriginal = cv::imread("image1.png");
    if (imgOriginal.empty()) {
        std::cout << "error: image not read from file\n\n";
        _getch();          // may have to modify this line if not using Windows
        return(0);
    }
    cv::imshow("imgOriginal", imgOriginal);


    // split the original image into Blue, Green, and Red channels
    std::vector<cv::Mat> imgBgrColorChannels;
    cv::split(imgOriginal, imgBgrColorChannels);
    cv::Mat imgBlue = imgBgrColorChannels[0];
    cv::Mat imgGreen = imgBgrColorChannels[1];
    cv::Mat imgRed = imgBgrColorChannels[2];

    // display the Blue, Green, and Red channel images
    cv::imshow("imgBlue", imgBlue);
    cv::imshow("imgGreen", imgGreen);
    cv::imshow("imgRed", imgRed);

    // split the original image into Hue, Saturation, and Value channels
    std::vector<cv::Mat> imgHsvColorChannels;
    cv::split(imgOriginal, imgHsvColorChannels);    
    cv::Mat imgHue = imgHsvColorChannels[0];
    cv::Mat imgSat = imgHsvColorChannels[1];
    cv::Mat imgVal = imgHsvColorChannels[2];

    // display the Hue, Saturation, and Value channels
    cv::imshow("imgHue", imgHue);
    cv::imshow("imgSat", imgSat);
    cv::imshow("imgVal", imgVal);

    // split the original image into Luminance, A, and B channels
    std::vector<cv::Mat> imgLabColorChannels;
    cv::split(imgOriginal, imgLabColorChannels);
    cv::Mat imgLum = imgLabColorChannels[0];
    cv::Mat imgA = imgLabColorChannels[1];
    cv::Mat imgB = imgLabColorChannels[2];

    // display the Luminance, A, and B channels
    cv::imshow("imgLum", imgLum);
    cv::imshow("imgA", imgA);
    cv::imshow("imgB", imgB);

    cv::waitKey();
    return(0);
}

















