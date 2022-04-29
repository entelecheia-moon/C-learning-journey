//一球从M米高度自由下落，每次落地后返回原高度的一半，再落下。 
//它在第N次落地时反弹多高？共经过多少米？ 结果保留两位小数。
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

