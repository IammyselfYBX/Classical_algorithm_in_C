/**
 * 题目：求一个3*3矩阵对角线元素之和 
___________________________________________________________________

程序分析：利用双重for循环控制输入二维数组，再将a累加后输出。
___________________________________________________________________
*/
#include <stdio.h>

int main(int argc, char *argv[])
{
    float a[3][3],sum=0;
    int i,j;

    printf("please input rectangle element:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%f",&a[i][j]);
        }
    }
    for(i=0;i<3;i++){
        sum=sum+a[i][i];
    }
    printf("--------------------------------\n");
    printf("The matrix:\n");
    for(i =0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%f ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n对角线之和: %6.2f\n",sum);

    return 0;
} 