//本关任务：编写一个程序，任意输入n，求S=1!+2!+...+n!。  
//注意：n!表示n的阶乘。0的阶乘等于1，负数的阶乘等于0。
#include<stdio.h>
	int main(void)
	{  
	  /*********Begin*********/
	  int i,n;
	  long sum=1,sum2=0; 
	  scanf("%d",&n);
	  if(n==0||n==1) {
	  	sum2=1;
	  }else if(n<0){
	  	sum2=0;
	  }else{
	  	for(i=1;i<=n;i++){
		  int t=i;
		  sum=1;
		  while(t>0){
		  	sum*=t--;
		  }
		  sum2+=sum;
	  }
	}
	  
	  printf("%ld",sum2);
	  /*********End**********/ 
       return 0;
	}

