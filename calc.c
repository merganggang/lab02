#include <stdio.h>

int add(int x, int y) {
    return x + y;
}

double multiply(double x, double y) {
    return x * y;
}

int main() {
    int a = 10, b = 20;
    double c = 3.14, d = 2.0;

    printf("add(%d, %d) = %d\n" , a, b, add(a, b));
    printf("multiply(%.2f, %.2f) = %.2f\n", c, d, multiply(c, d));
    return 0;
}