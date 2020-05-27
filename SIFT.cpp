#include<iostream>
#include<opencv2/opencv.hpp>
#include "mySIFT.h"
using namespace cv;
using namespace std;

int main()
{
	Mat img = imread("car.jpg");
	meSIFT x(img,4,2);
	x.DoSift();
	x.ShowKeypoints();
	return 0;
}