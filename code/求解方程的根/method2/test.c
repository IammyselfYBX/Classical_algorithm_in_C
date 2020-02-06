/**
 * 用二分法求方程 2*x*x*x-4*x*x+3*x-6=0 的根
*/

#define Epsilon 1.0E-5 /*控制解的精度*/
#include <math.h>
#include <stdio.h>
float function(float x){
    return 2*x*x*x-4*x*x+3*x-6;
}

int main(int argc, char *argv[])
{ 
    float x1=0.0, x2=100.0, x0;    //x1,x2代表区间左右边界，x0代表方程跟的值
    float f1, f2, f0;              //f1,f2代表x1,x2对应的值，f0代表x1与x2中点的值
    x0=(x1+x2)/2;
    f0=function(x0);                // 求中点的函数值 
    f1=function(x1);
    f2=function(x2);
    
    while(fabs(f0)>=Epsilon){ 
        if(f0*f1<0){ 
            x2=x0;
            x0=(x1+x2)/2;
            f0=function(x0);
        }else if(f0*f2<0){ 
            x1=x0;
            x0=(x1+x2)/2;
            f0=function(x0);
        }else{
            break;
        }
    }
    printf("用二分法求得方程的根：%f\n",x0); 

    return 0;
} 
