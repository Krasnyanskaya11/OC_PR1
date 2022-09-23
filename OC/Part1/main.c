#include <stdio.h>
#include <math.h>
int function_G(double radian){
    double pi = 3.1415926;
    double g = exp(-abs(radian)) * cos(radian);
    int x = (radian * 180) / pi + 1;
    printf("g(%d)=%lf\n", x, g);
};
int function_F(double radian){
    double pi = 3.1415926;
    double f = exp(-abs(radian)) * sin(radian);
    int x = (radian * 180) / pi + 1;
    printf("f(%d)=%lf\n", x, f);
};
int main() {
    double f, g, x, pi = 3.1415926, radian;

    printf("Enter x : ");
    scanf("%lf", &x);
    radian = x * pi / 180;
    function_F(radian);
    function_G(radian);

    return 0;

}