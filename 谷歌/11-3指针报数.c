/*任务描述
题目描述:有n人围成一圈，顺序排号。从第1个人开始报数（从1到3报数），凡报到3的人退出圈子，问最后留下的是原来的第几号的那位。
输入   初始人数n
输出   最后一人的初始编号
样例输入：3
样例输出：2            */
#include<stdio.h>
int main()
{ 
    int i,n,a[100],count,* p,out;
    scanf("%d",&n);
    for(i=0;i<n;i++)      
        a[i]=i+1;
        i=0;                
        count=0;              
        out=0;                
        p=a;
    while(out<n-1)        
    {
        if(*(p+i)!=0)    
            count++;
        if(count==3)     
        {
            *(p+i)=0;    
            count=0;     
            out++;
        }
        i++;              
        if(i==n)          
        i=0;
    }
    while(*p==0)          
        p++;
    printf("%d\n",*p);
    return 0;
}

