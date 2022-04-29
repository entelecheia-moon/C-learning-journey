#include<stdio.h>
	int main(void)
	{  
	  double x;
	  scanf("%lf",&x);
	  double y;
	  if((x<0)&&(x!=-3)){
		  y=x*x+x-6;
	  }else if(x>=0&&x<10&&x!=2&&x!=3){
		  y=x*x-5*x+6;
	  }else{
		  y=x*x-x-1;
	  }
	  printf("%.3f",y);
      return 0;
	}

