#include<stdio.h>
int main() 
{
	printf("������һ��������"); 
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
