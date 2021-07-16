#include <cmath>
using namespace std;

bool approx_equals(double a, double b) {
    double diff;
    
    diff = abs(a-b);
    if (diff < 0.001)
        return true;
    else
        return false;
}