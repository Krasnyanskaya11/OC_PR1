#include <stdio.h>


int function_G(double radian);
int function_F(double radian);
int main() {
    double f,g,x,radian,PI=3.1415926;

    printf("Enter x : ");
    scanf("%lf",&x);
    radian=x*PI/180;
    function_G(radian);
    function_F(radian);
}
