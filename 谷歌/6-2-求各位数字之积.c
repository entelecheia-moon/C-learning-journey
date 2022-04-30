//本关任务：计算正整数num的各位上的数字之积。
//例如：
//输入：2583      经过----(2x5x8x3)      输出：240
//输入：102       经过----(1x0x2)       输出：0
//输入：136       经过----(1x3x6)       输出：18
#include<stdio.h>
	int main(void)
	{  
	  /*********Begin*********/
	  int num;
	  int sum=1;
	  scanf("%d",&num);
	  while(num>0){
		  sum*=(num%10);
		  num/=10;
	  }
	  printf("%d",sum);
	  /*********End**********/ 
       return 0;
	}
