#include<stdio.h>
int main() 
{
	printf("请输入一个整数："); 
	int n;
	scanf("%d",&n);
	int a=1;
	int i=1;
	while(i<n)
	{ 
	i++;
	a*=i;
	}
	printf("%d!=%d",n,a);
	return 0;
}
