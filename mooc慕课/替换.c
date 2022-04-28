#include<stdio.h>
int main()
{
	int a=0;
	int b=0;
	int c;
	printf("请输入两个单位整数："); 
	scanf("%d%d",&a,&b); 
	c=a;
	a=b;
	b=c;
	printf("替换得到：");
	printf("a=%d,b=%d",a,b);
	return 0;
 } 
