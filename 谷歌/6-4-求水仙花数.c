#include<stdio.h>
	int main(void)
	{  
	  /*********Begin*********/
	  int i,a,b,c,s;
	  for(i=100;i<1000;i++){
		  a=i/100;
		  b=i/10%10;
		  c=i%100%10;
		  s=a*a*a+b*b*b+c*c*c;
		  if(i==s){
			  printf("%d ",i);
		  }
	  }
	  
	  /*********End**********/ 
       return 0;
	}

