#include<stdio.h>
	int main(void)
	{  
	  /*********Begin*********/
	  int a,b,c,d,e,sum;
	  float average;
	  scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	  sum=a+b+c+d+e;
	  average=sum/5.00;
	printf("%d %.2f",sum,average);
	  
	  /*********End**********/ 
       return 0;
	}
