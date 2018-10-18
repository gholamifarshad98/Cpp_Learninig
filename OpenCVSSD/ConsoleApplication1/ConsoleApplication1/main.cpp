#include <iostream>
#include <opencv2/highgui/highgui.hpp>
using namespace std;
using namespace cv;
Mat MySSD(Mat &, Mat &, int, int, int, int);
int main() {
	Mat leftImage = imread("view0.png",0);
	Mat rightImage = imread("view1.png", 0);
	if (leftImage.empty()||rightImage.empty()) {
		cout << "Error in reading Left or right image" << endl;
	}
	int w;
	int h;
	h = leftImage.cols;
	w = leftImage.rows;
	Mat Disparity;
	Disparity= MySSD(leftImage, rightImage, 6, 30,w,h);
	imshow("left Image", leftImage);
	imshow("right Image",rightImage);
	imshow("Disparity Image", Disparity);
	cout << "Width is ===>" << w << " and Hight is ====> " << h<<endl;
	waitKey(0);

	return 0;
}


Mat MySSD(Mat &left, Mat &right, int win, int MaxOffset,int w,int h) {
	int halfWin = int(win / 2);

	Mat result(h ,w  , CV_8UC1, Scalar(255));

	for (int i = halfWin; i < h - halfWin; ++i) {
		for (int j = halfWin; j < w - halfWin ; ++j) {
			int ssd_reserved = 35635;
			int bestOffset = 0;
			int offset_adjust = 255 / MaxOffset;
			for (int offset = 0; offset <= MaxOffset; ++offset) {
				 int ssd = 0;
				int ssdTemp = 0;
				for (int u = -halfWin; u <= halfWin; u++) {
					for (int v = -halfWin; v <= halfWin; v++) {
						ssdTemp = (left.at<uchar>((j + v), (i + u)) - right.at<uchar>((j + v) , (i + u - offset)));
						ssdTemp = ssdTemp*ssdTemp;
						ssd = ssd + ssdTemp;
					}
				}
				if (ssd < ssd_reserved) {
					bestOffset = offset;
					ssd_reserved = ssd;

				}
			}
			result.at<uchar>(j,i) = bestOffset* offset_adjust;
		}
	}
	return result;
}