#include "mymath.h"

int add(int x, int y) {
    return x + y;
}
double multiply(double x, double y) {
    return x * y;
}

int subtract(int x, int y) {
    return x - y;
}

double divide(double x, double y) {
    if (y == 0) return 0;
    return x / y;
}
