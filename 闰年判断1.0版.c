#include<stdio.h>
int main()
{
	int year;
	printf("请输入一个年份:\n");
	scanf("%d",&year);
	if((year%4==0&&year%100!=0)||(year%400==0))
	{printf("%d 年是闰年。\n",year);
    }else{printf("%d年不是闰年。\n",year);
	}
    
	return 0;
 } 
