//本关任务：编写程序计算  
// 1 - 1/2 + 1/3 - 1/4 + ..... +1/99 - 1/100 的值,
// 并显示出来(保留结果为小数点后三位)。

#include<stdio.h>
	int main(void)
	{  
	  /*********Begin*********/
	  float a=1,b=0;
	  int i;
	  for(i=1;i<101;i++) {
		  if(i%2==1){
			  b+=a/i;
		  }else{
			  b-=a/i;
		  }
	  }
	  printf("%.3f",b); 
	  
	  /*********End**********/ 
       return 0;
	}
