#include<stdio.h>
int month_days(int year);
int main(){
	int year,i;
	printf("���������:");
	scanf("%d",&year);
	for(i=1;i<=12;i++){
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
			printf("%d��%d�µ�����Ϊ31��\n",year,i);
		}else if(i==4||i==6||i==9||i==11){
			printf("%d��%d�µ�����Ϊ30��\n",year,i);
		}else{
			if(month_days(year)){
				printf("%d��%d�µ�����Ϊ29��\n",year,i);
			}else{
				printf("%d��%d�µ�����Ϊ28��\n",year,i);		
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
