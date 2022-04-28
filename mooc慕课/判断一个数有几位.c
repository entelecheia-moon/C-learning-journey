#include<stdio.h>
int main()
{   
  int  long long x;
  int long long n=0;
  scanf("%d",&x);  
  n++;
  x/=10;
  while(x>0){
  	n++;
  	x/=10;
  	//printf("x=%d,n=%d\n",x,n);
  }
  printf("这个整数是一个%d位整数\n",n);
  return 0;
}
 
