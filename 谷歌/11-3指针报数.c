/*��������
��Ŀ����:��n��Χ��һȦ��˳���źš��ӵ�1���˿�ʼ��������1��3��������������3�����˳�Ȧ�ӣ���������µ���ԭ���ĵڼ��ŵ���λ��
����   ��ʼ����n
���   ���һ�˵ĳ�ʼ���
�������룺3
���������2            */
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

