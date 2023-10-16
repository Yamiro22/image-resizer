// Include necessary libraries
#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    // Load the image from a file
    cv::Mat img = cv::imread("input.jpg");

    // Check if the image was loaded successfully
    if (img.empty()) {
        std::cerr << "Failed to open the image file!" << std::endl;
        return -1;
    }

    // Resize the image
    cv::Mat resized_img;
    int new_width = 300;
    int new_height = 200;
    cv::resize(img, resized_img, cv::Size(new_width, new_height));

    // Save the resized image to a file
    cv::imwrite("output.jpg", resized_img);

    // Display the original and resized images (Optional)
    cv::imshow("Original Image", img);
    cv::imshow("Resized Image", resized_img);
    cv::waitKey(0);

    return 0;
}
