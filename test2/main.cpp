#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;

int main()
{
  Mat srcImage = imread("1.jpg");
  imshow("[Orignal] Corrison op", srcImage);
  Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));
  Mat dstImage;
  erode(srcImage, dstImage, element);
  imshow("[Result] Corrison op", dstImage);
  waitKey(0);

  return 0;
}
