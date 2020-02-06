/**
 * 题目：一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。
*/
#include <stdio.h>

int main(int argc, char *argv[]){
    int ge, shi, qian, wan, x;
    printf("Please input 5 digits: ");
    scanf("%d", &x);
    wan=x/10000;
    qian=x%10000/1000;
    //bai=x%1000/100;
    shi=x%100/10;
    ge=x%10;

    if(ge == wan && shi == qian){
        printf("Thie number is palindrome\n");
    }else{
        printf("Thie number is not palindrome\n");
    }

    return 0;
}
