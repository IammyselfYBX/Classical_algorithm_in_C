/**
 * 题目：一只猴子摘了N个桃子第一天吃了一半又多吃了一个,第二天又吃了余下的一半又多吃了一个,到第十天的时候发现还有一个。求N是多少?
*/
#include <stdio.h>

int main(int argc, char *argv[]){
    int i, s, n=1;

    for(i=1; i<10; i++){
        s = (n+1)*2;
        n=s;
    }
    printf("第一天摘了%d个桃子\n",s);

    return 0;
}
