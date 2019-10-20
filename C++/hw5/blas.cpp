#include <iostream>
#include <cmath>
#include "blas.h"

int amax(const double *x, const unsigned int len) {
    double max{0};
    int maxi{};
    if (len == 0) {
        return -1;
    } else {
        for(unsigned int i{}; i < len; i++) {
            if (fabs(*(x + i)) > fabs(max)) {
                max = *(x + i);
                maxi = (int)i;
            }
        }
    }
    return maxi;
}
double asum(const double *x, const unsigned int len) {
    double sum{};
    if (len == 0) {
        return 0;
    } else {
        for(unsigned int i{}; i < len; i++) {
            sum += fabs(*(x + i));
        }
    }
    return sum;
}

void copy(const double* x, double* y, const unsigned int len) {
    for(unsigned int i{}; i < len; i++) {
        *(y+i) = *(x+i);
    }
}

double dot(const double *x, const double *y, const unsigned int len) {
    double dott{};
    for(unsigned int i{}; i < len; i++) {
        dott += *(x+i) * *(y+i);
    }
    return dott;
}

void scale(const double a, double *x, const unsigned int len) {
    for(unsigned int i{}; i < len; i++) {
        *(x+i) *= a;
    }
}

void axpy(const double a, const double *x, double *y, const unsigned int len) {
    for(unsigned int i{}; i < len; i++) {
        *(y+i) = *(x + i) * a + *(y+i);
    }
}

double norm2(const double *x, const unsigned int len) {
    double normsum{};
    if (len == 0) {
        return 0;
    } else {
        for(unsigned int i{}; i < len; i++) {
            normsum += pow(*(x+i), 2);
        }
    }
    return sqrt(normsum);
}

void swap(double *x, double *y, const unsigned int len) {
    auto *swaparr = new double[len];
    for(unsigned int i{}; i < len; i++) {
        swaparr[i] = *(x+i);
        *(x+i) = *(y+i);
        *(y+i) = swaparr[i];
    }
    delete[] swaparr;
}