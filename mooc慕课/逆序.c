#include<stdio.h>
int main()
{
    int a,b;
    printf("����һ����λ������");
    scanf("%d",&a);
    b=a%10*100+a/10%10*10+a/100;
    printf("b=%d\n",b);
    return 0;

}
