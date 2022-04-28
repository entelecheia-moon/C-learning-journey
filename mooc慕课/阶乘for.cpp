#include<stdio.h>
int main()
{
	printf("请输入一个整数：");
	int n;
	scanf("%d",&n);
	int a=1;
	int i=1;
	for(i=2;i<=n;i++)
	//初始条件，循环继续的条件，循环每一轮要做的事情 
	{
		a*=i;
	}
	printf("%d!=%d",n,a);
	return 0;
}
