#include<stdio.h>
int main()
{
	int year;
	printf("������һ�����:\n");
	scanf("%d",&year);
	if((year%4==0&&year%100!=0)||(year%400==0))
	{printf("%d �������ꡣ\n",year);
    }else{printf("%d�겻�����ꡣ\n",year);
	}
    
	return 0;
 } 
