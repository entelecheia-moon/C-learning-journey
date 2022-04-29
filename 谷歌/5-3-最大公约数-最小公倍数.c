#include<stdio.h>
	int main(void)
	{  
	  int a,b,x,y,a1,b1;
	  scanf("%d %d",&a,&b);
	  a1=a;b1=b;
	  while(b!=0){
		  x=b;
		  b=a%b;
		  a=x;
		}
	  y=a1*b1/x;
	  printf("最大公约数是:%d\n最小公倍数是:%d",x,y);
      return 0;
	}

