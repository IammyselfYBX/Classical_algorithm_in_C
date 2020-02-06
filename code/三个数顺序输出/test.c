/**
 * 题目：输入三个整数x,y,z，请把这三个数由小到大输出。 
__________________________________________________________________

程序分析：我们想办法把最小的数放到x上，先将x与y进行比较，如果x>y则将x与y的值进行交换， 
　　　　　然后再用x与z进行比较，如果x>z则将x与z的值进行交换，这样能使x最小。 
___________________________________________________________________
*/
#include <stdio.h>

void xchg(int *a, int *b){
    *a = *a ^ *b;
    *b = *b ^ *a;
    *a = *a ^ *b;
}

int main(int argc, char *argv[]){
    int x, y, z;
    printf("Please input three number (like 23, 34, 56): ");
    scanf("%d, %d, %d", &x, &y, &z);
    if(x>y){
        xchg(&x, &y);
    }
    if(x>z){
        xchg(&x, &z);
    }
    if(y>z){
        xchg(&y, &z);
    }

    printf("Small to Big: %d %d %d\n", x, y, z);
    return 0;
}
