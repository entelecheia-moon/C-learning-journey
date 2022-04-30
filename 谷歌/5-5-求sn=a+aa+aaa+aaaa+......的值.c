//本关任务：键盘输入正整数a和n，编程 s=a+aa+aaa+aaaa+aa...a（n个a）的值。
//例如：
//a=2 ，n=5时,表示计算由2组成的数的和：2+22+222+2222+22222  ( 此时 共有5个数相加)。
//输入：5    3   表示3个由5组成的数相加，即计算5+55+555的值，输出：615
//输入：5    4   表示计算5+55+555+5555的值，输出：6170
#include<stdio.h>
	int main(void)
	{  
	  /*********Begin*********/
	  int a,n,i,sum=0,a1;
	  i=0;
	  a1=a;
	  scanf("%d %d",&a,&n);
	  while(i<n){
	  	  i++;
		  sum=sum+a;
		  a=(10*a)+a1; 
		  
	  }
	  printf("%d",sum);
	  /*********End**********/ 
       return 0;
	}




//#include<stdio.h>
//	int main(void)
//	{  
//	  int i,a,b,sum=0,a1;
//	  scanf("%d %d",&a,&b);
//	  a1=a;
//	  for(i=0;i<b;i++){
//		  sum+=a;
//		  a=a*10+a1;
//	  }
//	  printf("%d",sum);
//      return 0;
//	}
