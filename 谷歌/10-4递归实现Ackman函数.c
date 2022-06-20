/*任务描述
题目描述：编写一函数实现下列Ackman函数，其中m，n为正整数  
 Acm(m,n)=  n+1
			Acm(m-1,1)
			Acm(m-1,Acm(m,n-1))
 if m=0,n>0
 if n=0,m>0
 if n>0,m>0
输入     一个两个整数
输出     输出表达式的值，占一行。
样例输入：1 1
样例输出：3               */

#include<stdio.h>
int Acm(int m,int n){
    if(m==0&&n>0)
        /*********Begin*********/
        return(n+1);
        /*********End**********/
    else if(n==0&&m>0)
        /*********Begin*********/
        return(Acm(m-1,1));
        /*********End**********/
    else
        /*********Begin*********/
        return(Acm(m-1,Acm(m,n-1)));
        /*********End**********/
}
int main(void)
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d", Acm(m,n));
    return 0;
}

