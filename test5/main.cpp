#include <opencv2/opencv.hpp>
using namespace cv;

int main()
{
  VideoCapture capture("1.avi");
  
  while(1)
    {
      Mat frame;
      capture >> frame;
      imshow("Reading", frame);
      waitKey(30);
    }
  return 0;
}
