#include<stdio.h>
int main()
{
	printf("��ֱ�����ǰ���Сʱ�ͷ��ӣ�\n");
	int hour1,minute1;
	int hour2,minute2;
	scanf("%d %d",&hour1,&minute1);
	scanf("%d %d",&hour2,&minute2);
	int a=hour2-hour1;
	int b=minute2-minute1;
	if(b<0){
	a--;
	b+=60;
    }
	printf("ʱ���Ϊ%dʱ%d���ӡ�\n",a,b);
	return 0;
}
