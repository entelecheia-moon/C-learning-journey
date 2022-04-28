#include<stdio.h>
int main()
{
	printf("请分别输入前后的小时和分钟：");
	int hour1,minute1;
	int hour2,minute2;
	scanf("%d %d",&hour1,&minute1);
	scanf("%d %d",&hour2,&minute2);
	int a=hour2-hour1;
	int b=minute2-minute1;
	if(b<0){
	  printf("前后相差%d时%d分钟\n",a-1,b+60);
    }
    else{
    	
	printf("前后相差%d时%d分钟\n",a,b);
    }
	return 0;
}
