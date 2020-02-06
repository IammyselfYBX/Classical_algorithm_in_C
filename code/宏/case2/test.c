#include <stdio.h>
/*宏定义中允许包含两道以上命令的情形，此时必须在最右边加上"\"*/
#define exchange(a,b) { \
  int t=0; \
    t=a; \
    a=b; \
    b=t; \
}

int main(void)
{
    int x=10;
    int y=20;
    printf("x=%d; y=%d\n",x,y);
    exchange(x,y);
    printf("x=%d; y=%d\n",x,y);

return 0;
} 

