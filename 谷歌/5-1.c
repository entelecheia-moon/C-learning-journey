//һ���M�׸߶��������䣬ÿ����غ󷵻�ԭ�߶ȵ�һ�룬�����¡� 
//���ڵ�N�����ʱ������ߣ������������ף� ���������λС����
#include<stdio.h>
  int main(void)
{ 
   float a,sum=0;
   int n,i;
   scanf("%f %d",&a,&n);
   for(i=0;i<n;i++){
    sum+=a;
    a/=2;
    sum+=a;
   }
   printf("%.2f %.2f",a,sum-a);
    return 0;
 }

