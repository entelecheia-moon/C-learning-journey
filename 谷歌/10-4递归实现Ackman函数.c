/*��������
��Ŀ��������дһ����ʵ������Ackman����������m��nΪ������  
 Acm(m,n)=  n+1
			Acm(m-1,1)
			Acm(m-1,Acm(m,n-1))
 if m=0,n>0
 if n=0,m>0
 if n>0,m>0
����     һ����������
���     ������ʽ��ֵ��ռһ�С�
�������룺1 1
���������3               */

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

