//�������񣺼���������num�ĸ�λ�ϵ�����֮����
//���磺
//���룺2583      ����----(2x5x8x3)      �����240
//���룺102       ����----(1x0x2)       �����0
//���룺136       ����----(1x3x6)       �����18
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
