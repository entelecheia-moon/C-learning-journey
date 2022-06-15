#include<stdio.h>
int month_days(int year);
int main(){
	int year,i;
	printf("请输入年份:");
	scanf("%d",&year);
	for(i=1;i<=12;i++){
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
			printf("%d年%d月的天数为31天\n",year,i);
		}else if(i==4||i==6||i==9||i==11){
			printf("%d年%d月的天数为30天\n",year,i);
		}else{
			if(month_days(year)){
				printf("%d年%d月的天数为29天\n",year,i);
			}else{
				printf("%d年%d月的天数为28天\n",year,i);		
			}
		}
	}
	return 0;
} 
int month_days(int year){
	if(year%4==0 && year%100!=0 ||year%400==0){
		return 1;
	}
	return 0;
}
