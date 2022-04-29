#include<stdio.h>
int main(void)
	{
	  int area=0;
	  double h,sum,a,b;
	  scanf("%d,%lf",&area,&h);
	  if(h-(int)h!=0){
		  h=(int)h+1;
	  }
	  switch(area){
		  case 0:
		  a=10;b=3;break;
		  case 1:
		  a=10;b=4;break;
		  case 2:
		  a=15;b=5;break;
		  case 3:
		  a=15;b=6.5;break;
		  case 4:
		  a=15;b=10;break;
          default:
		  printf("Error in Area\n");
		  
	  }
	  sum=h>1?a+(h-1)*b:a;
	  printf("Price: %.2f\n",sum);
      return 0;
	}
