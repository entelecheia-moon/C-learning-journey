/*
任务描述
题目描述:输入一段字符(由空格、字母和数字几种组成，保证开头不为空格)，里面有若干个字符串，
求这些字符串的长度和，并输出最长字符串内容,如果有多个输出最先出现的那个字符串。以stop作为最后输入的字符串。  
输入
输入一段文字
输出
输入一段字符，以stop作为最后输入的字符串。
样例输入：
My name is Amy
My name is Jane
stop
样例输出：
11 name
12 name
提示：
字符串长度不超过100。
*/
#include<stdio.h>
#include <string.h>
int main(void)
{
    /*********Begin*********/
    char a[100];
    int i, j, pos = 0;
    int str_len, word_len, max_word_len;
 
    while(1) {
        str_len = word_len = max_word_len = 0;
 
         fgets(a, 100, stdin);//fgets函数的用法
 
        if (strlen(a) <= 1)//输入的字符只有一个的情况
            continue;
        if (strlen(a) < 99)   //remove '\n'
            a[strlen(a)-1] = 0;
 
        if(strncmp(a,"stop", strlen("stop"))==0)
            break;
        for(i = 0; a[i] !='\0'; i++) {
            if(a[i] != ' ') {
                word_len++;
                str_len++;
                continue;
            }
            if (word_len  > max_word_len) {
                max_word_len = word_len;
                pos = i - word_len;
            }
            word_len = 0;
        }
        if (word_len  > max_word_len) {
            max_word_len = word_len;
            pos = i - word_len;
        }
 
        printf("%d ", str_len);
        for (i = pos; i < pos + max_word_len; i++)
            printf("%c", a[i]);
        putchar(10);
    }
 
    /*********End**********/
    return 0;
}

