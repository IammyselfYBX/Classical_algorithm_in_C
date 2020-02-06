/**
 * 题目：输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数
__________________________________________________________________

程序分析：利用while语句,条件为输入的字符不为'\n'.
___________________________________________________________________
*/
#include <stdio.h>

int main(int argc, char *argv[]){
    char c;
    int letter = 0, space = 0, digit = 0, others = 0;
    printf("Please input some characters: ");
    while((c = getchar()) != '\n'){
        if((c>='a' && c<='z') || (c>='A' && c<= 'Z') ){
            letter++;
        }else if(c == ' '){
            space++;
        }else if(c >= '0' && c <= '9'){
            digit++;
        }
        else{
            others++;
        }        
    }
    printf("All in all: Total=%d\n char=%d space=%d digit=%d others=%d\n", 
            letter+space+digit+others,letter, space, digit, others);

    return 0;
}
