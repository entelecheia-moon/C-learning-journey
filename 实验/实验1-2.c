#include <stdio.h>
int main()
{
	int x,a,b,c,d;
	scanf("%d",&x);
	a=x/1000;
	b=x%1000/100;
	c=x%1000%100/10;
	d=x%1000%100%10;
	printf("个位是%d,十位是%d，百位是%d,千位是%d",d,c,b,a);
	return 0;
 } 
