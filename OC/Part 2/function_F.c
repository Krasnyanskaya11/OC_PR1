#include <stdio.h>
#include <math.h>
int function_F(double radian) {
    double pi = 3.1415926;
    double f = exp(-abs(radian)) * sin(radian);
    int x = (radian * 180) / pi + 1;
    printf("f(%d)=%lf\n", x, f);
}