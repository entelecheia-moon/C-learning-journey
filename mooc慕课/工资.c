#include<stdio.h>
int main()
{
	const double R=8.25;
	//R为工作每小时有8.25元 
	const int S=40;
    //S为一天工作标准时间为40小时
	double pay=0.00;
	int hours;
	printf("请输入工作小时数：");
	scanf("%d",&hours);
	printf("\n");
	if(hours>S)
	pay=S*R+(hours-S)*(R*1.5) ;
	else
	pay=R*hours;
	printf("你的工资为%f元\n",pay);
	return 0;
}
