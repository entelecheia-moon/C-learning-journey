#include<stdio.h>
int main()
{
	float price=0;
	float bill=0;
	printf("�������");
	scanf("%f",&price);
	printf("������Ʊ�棺");
	scanf("%f",&bill);
	if(bill>=price){
		printf("Ӧ������%fԪ\n",bill-price);
}
	else{
	
	printf("������˼������Ǯ������\n");
	}
	return 0; 
	}

