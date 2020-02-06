/**
 * 题目：一球从100米高度自由落下，每次落地后反跳回原高度的一半；
 *      再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？
*/
#include <stdio.h>

int main(int argc, char *argv[]){
    float sn=100.0, hn=sn/2;
    int n;

    for(n = 2; n<=10; n++){
        sn = sn+2*hn;   //第n次落地时共经过的米数
        hn=hn/2;        //第n次反跳高度
    }
    printf("the total of road is %f meter\n",sn);
    printf("the tenth is %f meter\n",hn);

    return 0;
}
