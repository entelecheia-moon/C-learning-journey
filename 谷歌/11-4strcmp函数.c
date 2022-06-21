/*任务描述
题目描述:用一个函数实现两个字符串的比较，即自己写一个strcmp函数
输入            输入两字符串
输出           输出最大的那个字符串
样例输入：
abc
abd
样例输出：abd              */
#include<stdio.h>
#include<string.h> 
int main()
{
  char a[100],b[100],t[100];                              
  scanf("%s",a);
  scanf("%s",b);
  if(strcmp(a,b)>0)
  {
    strcpy(t,a);
    strcpy(a,b);
    strcpy(b,t);
  }
  puts(b);
  return 0;
}

