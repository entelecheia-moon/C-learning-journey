#include<stdio.h>
int main()
{
	printf("������һ��������");
	int n;
	scanf("%d",&n);
	int a=1;
	int i=1;
	for(i=2;i<=n;i++)
	//��ʼ������ѭ��������������ѭ��ÿһ��Ҫ�������� 
	{
		a*=i;
	}
	printf("%d!=%d",n,a);
	return 0;
}
