#include<stdio.h>
	int main(void)
	{  
	  /*********Begin*********/
	  int a,y,m,d;
	  float b;
	  printf("Enter item number:\n");
	  scanf("%d",&a);
	  printf("Enter unit price:\n");
	  scanf("%f",&b);
	  printf("Enter purchase date (mm/dd/yy):\n");
	  scanf("%d/%d/%d",&y,&m,&d);
	  printf("Item Unit Purchase\n");
	  printf("%-9d$ %-9.2f%02d%02d%02d\n",a,b,y,m,d);
	  /*********End**********/ 
       return 0;
	}

