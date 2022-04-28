#include<stdio.h>
int main()
{
	float price=0;
	float bill=0;
	printf("请输入金额：");
	scanf("%f",&price);
	printf("请输入票面：");
	scanf("%f",&bill);
	if(bill>=price){
		printf("应该找您%f元\n",bill-price);
}
	else{
	
	printf("不好意思，您的钱不够。\n");
	}
	return 0; 
	}

