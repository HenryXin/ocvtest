#include <opencv2/opencv.hpp>

using namespace cv;

int main()
{
  Mat img = imread("1.jpg");
  imshow("picture1", img);
  waitKey(12000);
  return 0;
}
