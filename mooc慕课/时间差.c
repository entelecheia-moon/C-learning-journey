#include<stdio.h>
int main()
{
	printf("��ֱ�����ǰ���Сʱ�ͷ��ӣ�");
	int hour1,minute1;
	int hour2,minute2;
	scanf("%d %d",&hour1,&minute1);
	scanf("%d %d",&hour2,&minute2);
	int a=hour2-hour1;
	int b=minute2-minute1;
	if(b<0){
	  printf("ǰ�����%dʱ%d����\n",a-1,b+60);
    }
    else{
    	
	printf("ǰ�����%dʱ%d����\n",a,b);
    }
	return 0;
}
