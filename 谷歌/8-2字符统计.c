/*任务描述
题目描述:对于给定的一个字符串，统计其中数字字符出现的次数。  
输入
输入数据有多行，第一行是一个整数n，表示测试实例的个数，后面跟着n行，
每行包括一个由字母和数字组成的字符串。
输出
对于每个测试实例，输出该串中数值的个数，每个输出占一行。*/
#include<stdio.h>
#include<string.h>
 
int main(void)
{
    int n,count,i,k,j,w;
    char a[100];
    scanf("%d",&n);
    w = n;
    int b[100]={0};
    while(n > 0)
    { 
        count = 0;
        scanf("%s",a); 
        k = strlen(a);
         
        for(i=0; i<k; i++)
        {
            if(a[i]<='9' && a[i]>='0')
            {
                count++;
            }
        } 
        b[n-1] = count;
        n--;
    }
    for(j=w-1; j>=0; j--)
    {
        printf("%d", b[j]);
        if(j>0)
        printf("\n");
    }
 
    return 0;
}



