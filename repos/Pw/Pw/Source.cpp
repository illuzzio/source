#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main() {

	Mat img = imread("dog.jpg");
	cv::namedWindow("dog", cv::WINDOW_NORMAL);
	cv::imshow("dog", img);
	
	int x = 250;
	int y = 50;
	int width = 300;
	int height = 300;
	//прямоугольник
	cv::Rect rect(x, y, width, height);
	// верхний левый угол
	cv::Point pt1(x, y);
	// нижний правый угол
	cv::Point pt2(x + width, y + height);
	
	cv::rectangle(img, pt1, pt2, cv::Scalar(255,0,255));
	
	cv::rectangle(img, rect, cv::Scalar(255,0,255)); 

	cv::imwrite("dog_res.jpg", img);




	Mat img2 = imread("dog_res.jpg");
	cv::namedWindow("dog_res", cv::WINDOW_NORMAL);
	cv::imshow("dog_res", img2);


	
	cv::waitKey(0);
}
