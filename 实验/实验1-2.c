#include <stdio.h>
int main()
{
	int x,a,b,c,d;
	scanf("%d",&x);
	a=x/1000;
	b=x%1000/100;
	c=x%1000%100/10;
	d=x%1000%100%10;
	printf("��λ��%d,ʮλ��%d����λ��%d,ǧλ��%d",d,c,b,a);
	return 0;
 } 
