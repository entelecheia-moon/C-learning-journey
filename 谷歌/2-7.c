#include<stdio.h>
#include<math.h>
	int main(void)
	{  
	  /*********Begin*********/
	  double r,h,C1,Sb,Vb,PI;
	  PI=3.14;
	  scanf("%lf,%lf",&r,&h);
	  C1=PI*2*r;
	  Sb=4*PI*r*r;
	  Vb=PI*r*r*h;
	  printf("C1=%.2lf\nSb=%.2lf\nVb=%.2lf",C1,Sb,Vb);
	  

	  
	  /*********End**********/ 
       return 0;
	}
