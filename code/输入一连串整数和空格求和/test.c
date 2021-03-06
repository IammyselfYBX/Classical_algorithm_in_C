/**
 * 编写一个程序，
 *      要求用户输入一串整数和任意数目的空格，
 *      这些整数必须位于同一行中，但允许出现在该行中的任何位置。
 *      当用户按下键盘上的“Enter”键时，数据输入结束。
 *      程序自动对所有的整数进行求和并打印出结果。
*/

#include <stdio.h>

int main()
{
    printf("请输入一组整数和任意数目的空格，整数进行求和并打印出结果：");
    char ch;
    int i=0;
    int sum=0;
    while(scanf("%d",&i)==1)    //如果成功，就返回读入的长度
    {
        sum+=i;
        while ((ch=getchar()) == ' '){}
        if(ch=='\n')
        {
            break;
        }
        ungetc(ch,stdin);   //因为此时已经多读入一个数字，需要返回去，下次才会读取正确
    }
    printf("结果是：%d\n",sum);

    return 0;
}