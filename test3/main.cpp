#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;

int main()
{
  Mat srcImage = imread("1.jpg");

  imshow("Av filter [orignal]", srcImage);

  Mat dstImage;
  blur(srcImage, dstImage, Size(7,7));

  imshow("Av filter [result]", dstImage);

  waitKey(0);

  return 0;
}
