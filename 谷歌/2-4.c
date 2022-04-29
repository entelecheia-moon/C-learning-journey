#include<stdio.h>
	int main(void)
	{  
	  /*********Begin*********/
	  int a,b,c,x;
	  scanf("%d",&x);
	  a=x/100;
	  b=x/10%10;
	  c=x%100%10;
	  printf("%d %d %d",a,b,c);
	  /*********End**********/ 
       return 0;
	}

