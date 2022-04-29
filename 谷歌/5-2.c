#include<stdio.h>
	int main(void)
	{  
	  /*********Begin*********/
	  int n,s,i;
	  s=1;
	  scanf("%d", &n) ;
	  for(i=1;i<=1n;i++){
		  if(i % 5 ==0){
			  s*=i;
		  }
	  }
	  printf("%d\n", s);
	  
	  /*********End**********/ 
       return 0;
	}
