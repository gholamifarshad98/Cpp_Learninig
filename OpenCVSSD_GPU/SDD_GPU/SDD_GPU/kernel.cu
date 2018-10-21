
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <stdexcept>
#include <opencv2/core/utility.hpp>
#include "opencv2/core/cuda.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"

using namespace cv;
using namespace std;




int main(int argc, char** argv)
{

	bool running;
	Mat left_src, right_src;
	Mat left, right;
	cuda::GpuMat d_left, d_right;

	int ndisp = 88;

	Ptr<cuda::StereoBM> bm;

	bm = cuda::createStereoBM(ndisp);



	// Load images
	left_src = imread("s1.png");
	right_src = imread("s2.png");

	cvtColor(left_src, left, COLOR_BGR2GRAY);
	cvtColor(right_src, right, COLOR_BGR2GRAY);


	d_left.upload(left);
	d_right.upload(right);

	imshow("left", left);
	imshow("right", right);



	// Prepare disparity map of specified type
	Mat disp(left.size(), CV_8U);
	cuda::GpuMat d_disp(left.size(), CV_8U);

	cout << endl;


	running = true;
	while (running)
	{

		bm->compute(d_left, d_right, d_disp);

		// Show results
		d_disp.download(disp);

		imshow("disparity", (Mat_<uchar>)disp);

		waitKey(1);
	}

	return 0;
}





















/*

int main(void) {
	// Allocate & initialize host data - run on the host
	Mat leftImage = imread("view0.png", 0);
	Mat rightImage = imread("view1.png", 0);
	if (leftImage.empty() || rightImage.empty()) {
		cout << "Error in reading Left or right image" << endl;
	}
	int ro;
	int co;
	co = leftImage.cols;
	ro = leftImage.rows;
	Mat Disparity;
	leftImage.at<uchar>(ro - 5, co - 9) = 255;
	imshow("left Image", leftImage);
	imshow("right Image", rightImage);
	cout << "Width is ===>" << co << " and Hight is ====> " << ro << endl;




	waitKey(0);



	// host copies of a, b, c
	Mat *d_leftImage, *d_rightImage, *d_result; // device copies of a, b, c
	// Allocate space for device copies of a, b, c
	int size = sizeof(d_leftImage);
	cudaMalloc((void **)&d_leftImage, size);
	cudaMalloc((void **)&d_leftImage, size);
	cudaMalloc((void **)&d_result, size);

	// Copy a & b from the host to the device
	cudaMemcpy(d_leftImage, &leftImage, size, cudaMemcpyHostToDevice);
	cudaMemcpy(d_rightImage, &rightImage, size, cudaMemcpyHostToDevice);
	// Launch add() kernel on GPU
	add <<< 1, 1 >>>(d_a, d_b, d_c);

	// Copy result back to the host
	cudaMemcpy(&Disparity, d_result, size, cudaMemcpyDeviceToHost);
	// Cleanup
	cudaFree(d_leftImage); cudaFree(d_rightImage); cudaFree(d_result);

	
	return 0;
}
*/
Mat MySSD(Mat &left, Mat &right, int win, int MaxOffset, int ro, int co) {
	int halfWin = int(win / 2);

	Mat result(ro, co, CV_8UC1, Scalar(255));

	for (int i = halfWin; i < ro - halfWin; ++i) {
		for (int j = halfWin; j < co - halfWin; ++j) {
			int ssd_reserved = 9999635;
			int bestOffset = 0;
			double offset_adjust = 255 / MaxOffset;
			for (int offset = 0; offset <= MaxOffset; ++offset) {
				int ssd = 0;
				int ssdTemp = 0;
				for (int u = -halfWin; u <= halfWin; u++) {
					for (int v = -halfWin; v <= halfWin; v++) {
						ssdTemp = (left.at<uchar>((i + u), (j + v)) - right.at<uchar>((i + u), (j + v - offset)));
						ssdTemp = ssdTemp*ssdTemp;
						ssd = ssd + ssdTemp;
					}
				}
				if (ssd < ssd_reserved) {
					bestOffset = offset;
					ssd_reserved = ssd;

				}
			}
			result.at<uchar>(i, j) = bestOffset* offset_adjust;
		}
	}
	return result;
}



