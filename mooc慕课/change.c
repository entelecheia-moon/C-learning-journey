#include<stdio.h>
int main()
{
	float price=0;
	printf("请输入你的金额（元）：");
	scanf("%f", &price);
	float change=100.00-price;
	printf("找您%f元。\n",change);
	
	return 0;
}
