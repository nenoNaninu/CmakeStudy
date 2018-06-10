#include <iostream>
#include "MyTest.h"
#include <opencv2/opencv.hpp>

using namespace cv;

int main() {
    std::cout << "Hello, World!" << std::endl;

    int num = 0;
    for(int i = 0; i < 10;i++)
    {
        num += i;
    }

    std::cout<< num << std::endl;
    MyTest test;
    test.printTestCode();

    Mat mat = imread("../img.JPG");
    std::cout<<mat.cols <<" " << mat.rows << std::endl;
    resize(mat,mat,Size(static_cast<int>(mat.cols * 0.1), static_cast<int>(mat.rows * 0.1)));
    imshow("test",mat);
    waitKey(0);
    return 0;
}