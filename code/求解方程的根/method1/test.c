/**
 * 用牛顿迭代法 求方程 2*x*x*x-4*x*x+3*x-6 的根
*/
#define Epsilon 1.0E-6 /*控制解的精度*/
#include <math.h>
#include <stdio.h>

int main(int argc, char *argv[])
{ 
	float x1,x0=1.5;
	x1=x0-(2*x0*x0*x0-4*x0*x0+3*x0-6)/(6*x0*x0-8*x0+3);
	
    while(fabs(x1-x0>=Epsilon)){
        x0=x1;
	    x1=x0-(2*x0*x0*x0-4*x0*x0+3*x0-6)/(6*x0*x0-8*x0+3);
    }
	printf("方程的根为%f\n",x1);

    return 0;
} 
