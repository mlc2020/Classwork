#include <cstdlib>
#include <cmath>

using std::sqrt;

double approx_pi(int seed, int n) {
    // seed the random number generator
    srand(seed);

    // TODO(student): implement the rest.
    double dartcounter = 0;
    for(int i = 0; i < n; ++i) {
        double x = (double)rand() / RAND_MAX;
        double y = (double)rand() / RAND_MAX;
        if (pow(x, 2) + pow(y, 2) <= 1) {
            ++dartcounter;
        }
    }
    double area = dartcounter/n;
    // estimate the value of pi
    double pi_estimate = 4 * area;
    // return the estimated value of pi
    return pi_estimate;
}