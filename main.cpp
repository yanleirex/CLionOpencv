#include <iostream>
#include <opencv2/highgui/highgui.hpp>


int main() {
    std::cout << "Hello, World!" << std::endl;
    cv::Mat image = cv::imread("/home/yanlei/Pictures/528f146c6fb121676ce516a62e5232a3.jpg");
    cv::namedWindow("image");
    cv::imshow("image", image);
    return 0;
}