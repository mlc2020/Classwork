#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <cmath>
#include "functions.h"

using namespace std;

int main() {
    string filename;
    int width = 0;
    int height = 0;
    int targetWidth = 0;
    int targetHeight = 0;

    // Add code to validate input (Do in part 1)
    cout << "Input filename: ";
    cin >> filename;
    cout << "Input width and height: ";
    cin >> width;
    if (!cin.good()) {
        std::cout << "Error: width is a non-integer value";
        return -1;
    } else {
        if (width <= 0) {
            std::cout << "Error: width must be greater than 0. You entered " << width;
            return -1;
        }
    }
    cin >> height;
    if (!cin.good()) {
        std::cout << "Error: height is a non-integer value";
        return -1;
    } else {
        if (height <= 0) {
            std::cout << "Error: height must be greater than 0. You entered " << height;
            return -1;
        }
    }
    cout << "Input target width and target height: ";
    cin >> targetWidth;
    if (!cin.good()) {
        std::cout << "Error: target width is a non-integer value";
        return -1;
    } else {
        if (targetWidth <= 0) {
            std::cout << "Error: target width must be greater than 0. You entered " << targetWidth;
            return -1;
        } else if (targetWidth > width) {
            std::cout << "Error: target width must be less than width, " << targetWidth << " is greater than " << width;
            return -1;
        }
    }
    cin >> targetHeight;
    if (!cin.good()) {
        std::cout << "Error: target height is a non-integer value";
        return -1;
    } else {
        if (targetHeight <= 0) {
            std::cout << "Error: target height must be greater than 0. You entered " << targetHeight;
            return -1;
        } else if (targetHeight > height) {
            std::cout << "Error: target height must be less than height, " << targetHeight << " is greater than " << height;
            return -1;
        }
    }

    int originalWidth = width; // need to delete image array at end of program
    Pixel** image = createImage(width, height); // create array of size that we need
    if (image != nullptr) {
        if (loadImage(filename, image, width, height)) {
            cout << "Start carving..." << endl;

            while (width > targetWidth || height > targetHeight) {
                if (width > targetWidth) {
                    int* verticalSeam = findMinVerticalSeam(image, width, height);
                    removeVerticalSeam(image, width, height, verticalSeam);
                    --width;
                } if (height > targetHeight) {
//                    std::cout << "Reached here: 1" << endl;
                    int* horizontalSeam = findMinHorizontalSeam(image, width, height);
                    removeHorizontalSeam(image, width, height, horizontalSeam);
                    --height;
                }
            }

            // set up output filename
            stringstream ss;
            ss << "carved" << width << "X" << height << "." << filename;
            outputImage(ss.str().c_str(), image, width, height);
        }

        // call last to remove the memory from the heap
        deleteImage(image, originalWidth);
    }
    // else

}