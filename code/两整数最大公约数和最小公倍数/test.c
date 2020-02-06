/**
 * 题目：输入两个正整数m和n，求其最大公约数和最小公倍数。
__________________________________________________________________

程序分析：利用辗除法。
___________________________________________________________________
*/
#include <stdio.h>

int main(int argc, char *argv[])
{
    int a, b, num1, num2, temp;
    printf("Please input two numbers: \n  ");
    scanf("%d,%d", &num1, &num2);
    if(num1<num2){
        /*
          a=a^b；
          b=b^a； 
          a=a^b；
        */
        num1 = num1^num2;
        num2 = num2^num1;
        num1 = num1^num2;
    }
    a = num1;
    b = num2;
    while(b != 0){  //利用辗除法，直到b为0为止
        temp=a%b;
        a=b;
        b=temp;
    }
    printf("最大公约数:%d\n",a);
	printf("最小公倍数:%d\n",num1*num2/a);

    return 0;
}
