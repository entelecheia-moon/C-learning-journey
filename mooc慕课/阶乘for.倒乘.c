#include<stdio.h>
int main()
{
	printf("������һ��������");
	int n;
	scanf("%d",&n);
	int a=1;
	int i=n;
	for(i=n;i>=2;i--){
		a*=i;
	}
	printf("%d!=%d",n,a); 
	return 0;
}
