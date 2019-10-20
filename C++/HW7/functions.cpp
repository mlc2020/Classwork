#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <cmath>
#include "functions.h"

using namespace std;

Pixel** createImage(int width, int height) {
    cout << "Start createImage... " << endl;

    // Create a one dimensional array on the heap of pointers to Pixels
    //    that has width elements (i.e. the number of columns)
    Pixel** image = new Pixel*[width];

    bool fail = false;

    for (int i=0; i < width; ++i) { // loop through each column
        // assign that column to a one dimensional array on the heap of Pixels
        //  that has height elements (i.e. the number of rows)
        image[i] = new Pixel[height];

        if (image[i] == nullptr) { // failed to allocate
            fail = true;
        }
    }

    if (fail) { // if any allocation fails, clean up and avoid memory leak
        // deallocate any arrays created in for loop
        for (int i=0; i < width; ++i) {
            delete [] image[i]; // deleting nullptr is not a problem
        }
        delete [] image; // dlete array of pointers
        return nullptr;
    }

    // initialize cells
    //cout << "Initializing cells..." << endl;
    for (int row=0; row<height; ++row) {
        for (int col=0; col<width; ++col) {
            //cout << "(" << col << ", " << row << ")" << endl;
            image[col][row] = { 0, 0, 0 };
        }
    }
    cout << "End createImage... " << endl;
    return image;
}

void deleteImage(Pixel** image, int width) {
    cout << "Start deleteImage..." << endl;
    // avoid memory leak by deleting the array
    for (int i=0; i<width; ++i) {
        delete [] image[i]; // delete each individual array placed on the heap
    }
    delete [] image;
    image = nullptr;
}

// implement for part 1

int* createSeam(int length) {
    int *seam = nullptr;
    seam = new int[length];
    for (int i = 0; i < length; ++i) {
        seam[i] = 0;
    }
    return seam;
}

void deleteSeam(int* seam) {
    delete[] seam;
}

bool loadImage(std::string filename, Pixel** image, int width, int height) {
    cout << "Loading image..." << endl;
    // declare/define and open input file stream
    ifstream ifs (filename);

    // check if input stream opened successfully
    if (!ifs.is_open()) {
        cout << "Error: failed to open input file - " << filename;
        return false;
    }

    // get type from preamble
    char type[3];
    ifs >> type; // should be P3
    if ((toupper(type[0]) != 'P') || (type[1] != '3')) { // check that type is correct
        cout << "Error: type is " << type << " instead of P3" << endl;
        return false;
    }

    // get width (w) and height (h) from preamble
    int w = 0, h = 0;
    ifs >> w >> h;
    if (!ifs.good()) {
        std::cout << "Error: read non-integer value";
        return false;
    }
    if (w != width) { // check that width matches what was passed into the function
        cout << "Error: input width (" << width << ") does not match value in file (" << w << ")";
        return false;
    }
    if (h != height) { // check that height matches what was passed into the function
        cout << "Error: input height (" << height << ") does not match value in file (" << h << ")";
        return false;
    }

    // get maximum value from preamble
    int colorMax = 0;
    ifs >> colorMax;
    if (!ifs.good()) {
        cout << "Error: read non-integer value";
        return false;
    }

    // get RGB pixel values
    for(int j = 0; j < height; ++j) {
        for(int i = 0; i < width; ++i) {
            ifs >> image[i][j].r >> image[i][j].g >> image[i][j].b;
            if (!ifs.good()) {
                std::cout << "Error: read non-integer value";
                return false;
            }
            if (image[i][j].r < 0 || image[i][j].r > 255) {
                std::cout << "Error: invalid color value " << image[i][j].r;
            }
            if (image[i][j].g < 0 || image[i][j].g > 255) {
                std::cout << "Error: invalid color value " << image[i][j].g;
            }
            if (image[i][j].b < 0 || image[i][j].b > 255) {
                std::cout << "Error: invalid color value " << image[i][j].b;
            }
        }
    }
    return true;
}

bool outputImage(string filename, Pixel** image, int width, int height) {
    cout << "Outputting image..." << endl;
    ofstream ofs (filename);

    if (!ofs.is_open()) {
        cout << "Error: failed to open output file " << filename << endl;
        return false;
    }
    ofs << "P3" << endl << width << " " << height << endl << 255 << endl;
    for(int j = 0; j < height; ++j) {
        for(int i = 0; i < width; ++i) {
            ofs << image[i][j].r << " " << image[i][j].g << " " << image[i][j].b << endl;
        }
    }
    // check if output stream opened successfully

    // output preamble

    // output pixels
    return true;
}

int energy(Pixel** image, int x, int y, int width, int height) {
    int i1 = 0, i2 = 0;
    int j1 = 0, j2 = 0;
    if((x - 1) < 0) {
        if ((y - 1) < 0) {
            i1 = width - 1;
            i2 = x + 1;
            j1 = height - 1;
            j2 = y + 1;
        } else if ((y + 1) >= height) {
            i1 = width - 1;
            i2 = x + 1;
            j1 = y - 1;
            j2 = 0;
        } else {
            i1 = width - 1;
            i2 = x + 1;
            j1 = y - 1;
            j2 = y + 1;
        }
    } else if ((x + 1) >= width) {
        if ((y - 1) < 0) {
            i1 = x - 1;
            i2 = 0;
            j1 = height - 1;
            j2 = y + 1;
        } else if ((y + 1) >= height) {
            i1 = x - 1;
            i2 = 0;
            j1 = y - 1;
            j2 = 0;
        } else {
            i1 = x - 1;
            i2 = 0;
            j1 = y - 1;
            j2 = y + 1;
        }
    } else {
        if ((y - 1) < 0) {
            i1 = x - 1;
            i2 = x + 1;
            j1 = height - 1;
            j2 = y + 1;
        } else if ((y + 1) >= height) {
            i1 = x - 1;
            i2 = x + 1;
            j1 = y - 1;
            j2 = 0;
        } else {
            i1 = x - 1;
            i2 = x + 1;
            j1 = y - 1;
            j2 = y + 1;
        }
    }
    int xenergy = (int)(pow((image[i2][y].r - image[i1][y].r),2) + pow((image[i2][y].g - image[i1][y].g),2) + pow((image[i2][y].b - image[i1][y].b),2));
    int yenergy = (int)(pow((image[x][j2].r - image[x][j1].r),2) + pow((image[x][j2].g - image[x][j1].g),2) + pow((image[x][j2].b - image[x][j1].b),2));
    int dualgradient = xenergy + yenergy;
    return dualgradient;
}

// implement for part 2

// uncomment for part 2

int loadVerticalSeam(Pixel** image, int start_col, int width, int height, int* seam) {
    seam[0] = start_col;
    int total_energy = energy(image, start_col, 0, width, height);
    for (int i = 1; i < height; ++i) {
        int left_col = 0;
        int right_col = 0;
        int left_col_energy = 999999999;
        int right_col_energy = 999999999;
        int down_col_energy = 0;
        if (seam[i-1] - 1 < 0 && seam[i-1] + 1 > width - 1) {
            left_col = -1;
            right_col = -1;
            down_col_energy = energy(image, seam[i-1], i, width, height);
        } else if (seam[i-1] - 1 < 0) {
            right_col = -1;
            left_col_energy = energy(image, seam[i-1] + 1, i, width, height);
            down_col_energy = energy(image, seam[i-1], i, width, height);
        } else if (seam [i-1] + 1 > width - 1) {
            left_col = -1;
            right_col_energy = energy(image, seam[i-1] - 1, i, width, height);
            down_col_energy = energy(image, seam[i-1], i, width, height);
        } else {
            right_col_energy = energy(image, seam[i-1] - 1, i, width, height);
            left_col_energy = energy(image, seam[i-1] + 1, i, width, height);
            down_col_energy = energy(image, seam[i-1], i, width, height);
        }
        if (left_col == -1 && right_col == -1) {
            seam[i] = seam[i-1];
            total_energy += down_col_energy;
        } else if (left_col_energy < down_col_energy && left_col != -1 && right_col_energy >= left_col_energy) {
            seam[i] = seam[i-1] + 1;
            total_energy += left_col_energy;
        } else if (right_col_energy < down_col_energy && right_col != -1 && right_col_energy < left_col_energy) {
            seam[i] = seam[i-1] - 1;
            total_energy += right_col_energy;
        } else {
            seam[i] = seam[i-1];
            total_energy += down_col_energy;
        }
    }
    return total_energy;
}

int loadHorizontalSeam(Pixel** image, int start_row, int width, int height, int* seam) {
    seam[0] = start_row;
    int total_energy = energy(image, 0, start_row, width, height);
    for (int i = 1; i < width; ++i) {
        int left_row = 0;
        int right_row = 0;
        int left_row_energy = 999999999;
        int right_row_energy = 999999999;
        int down_row_energy = 0;
        if (seam[i-1] - 1 < 0 && seam[i-1] + 1 > height - 1) {
            left_row = -1;
            right_row = -1;
            down_row_energy = energy(image, i, seam[i-1], width, height);
        } else if (seam[i-1] - 1 < 0) {
            left_row = -1;
            right_row_energy = energy(image, i, seam[i-1] + 1, width, height);
            down_row_energy = energy(image, i, seam[i-1], width, height);
        } else if (seam [i-1] + 1 > height - 1) {
            right_row = -1;
            left_row_energy = energy(image, i, seam[i-1] - 1, width, height);
            down_row_energy = energy(image, i, seam[i-1], width, height);
        } else {
            right_row_energy = energy(image, i, seam[i-1] + 1, width, height);
            left_row_energy = energy(image, i, seam[i-1] -1, width, height);
            down_row_energy = energy(image, i, seam[i-1], width, height);
        }
        if (left_row == -1 && right_row == -1) {
            seam[i] = seam[i-1];
            total_energy += down_row_energy;
        } else if (left_row_energy < down_row_energy && left_row != -1 && right_row_energy >= left_row_energy) {
            seam[i] = seam[i-1] - 1;
            total_energy += left_row_energy;
        } else if (right_row_energy < down_row_energy && right_row != -1) {
            seam[i] = seam[i-1] + 1;
            total_energy += right_row_energy;
        } else {
            seam[i] = seam[i-1];
            total_energy += down_row_energy;
        }
    }
    return total_energy;
}

int* findMinVerticalSeam(Pixel** image, int width, int height) {
    int* min_seam = createSeam(height);
    int min_energy = loadVerticalSeam(image,  0, width, height, min_seam);
    for(int i = 1; i < width; ++i) {
        int* i_seam = createSeam(height);
        int seam_energy = loadVerticalSeam(image, i, width, height, i_seam);
        if (seam_energy < min_energy) {
            min_energy = seam_energy;
            delete[] min_seam;
            min_seam = i_seam;
            i_seam = nullptr;
        } else {
            delete[] i_seam;
            i_seam = nullptr;
        }
    }
    return min_seam;
}

int* findMinHorizontalSeam(Pixel** image, int width, int height) {
    int* min_horizontal_seam = createSeam(width);
//    std::cout << "Created pointer: " << min_horizontal_seam << endl;
    int min_energy = loadHorizontalSeam(image, 0, width, height, min_horizontal_seam);
//    std::cout << "Reached here: 3" << endl;
    for(int i = 1; i < height; ++i) {
        int* i_horizontal_seam = createSeam(width);
        int seam_energy = loadHorizontalSeam(image, i, width, height, i_horizontal_seam);
        if (seam_energy < min_energy) {
            min_energy = seam_energy;
            delete[] min_horizontal_seam;
            min_horizontal_seam = i_horizontal_seam;
            i_horizontal_seam = nullptr;
        } else {
            delete[] i_horizontal_seam;
            i_horizontal_seam = nullptr;
        }
    }
    return min_horizontal_seam;
}

void removeVerticalSeam(Pixel** image, int width, int height, int* verticalSeam) {
    for (int i = 0; i < height; ++i) {
        int temp_index = 0;
        auto *temp = new Pixel[width - 1];
        for (int j = 0; j < width; ++j) {
            if (j != verticalSeam[i]) {
                temp[temp_index] = image[j][i];
                ++temp_index;
            }
        }
        for (int k = 0; k < width - 1; ++k) {
            image[k][i] = temp[k];
        }
        delete[] temp;
    }
}


void removeHorizontalSeam(Pixel** image, int width, int height, int* horizontalSeam) {
    for (int i = 0; i < width; ++i) {
        int temp_index = 0;
        auto *temp = new Pixel[height - 1];
        for (int j = 0; j < height; ++j) {
            if (j != horizontalSeam[i]) {
                temp[temp_index] = image[i][j];
                ++temp_index;
            }
        }
        delete[] image[i];
        image[i] = temp;
    }
}
