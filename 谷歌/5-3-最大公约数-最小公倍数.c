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
	  printf("���Լ����:%d\n��С��������:%d",x,y);
      return 0;
	}

