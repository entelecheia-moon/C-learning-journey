#include<stdio.h>
int main()
{
	const double R=8.25;
	//RΪ����ÿСʱ��8.25Ԫ 
	const int S=40;
    //SΪһ�칤����׼ʱ��Ϊ40Сʱ
	double pay=0.00;
	int hours;
	printf("�����빤��Сʱ����");
	scanf("%d",&hours);
	printf("\n");
	if(hours>S)
	pay=S*R+(hours-S)*(R*1.5) ;
	else
	pay=R*hours;
	printf("��Ĺ���Ϊ%fԪ\n",pay);
	return 0;
}
