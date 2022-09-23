#include <stdio.h>
#include <math.h>

int function_G(double radian){
    double pi=3.1415926;
    double g=exp(-abs(radian))* cos(radian);
    int x=(radian*180)/pi+1;
    printf("g(%d)=%lf\n",x,g);

}