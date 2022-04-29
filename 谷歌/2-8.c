#include<stdio.h>
int MaxCommonFactor( int a, int b)
{ 
   int c; 
   if(a<=0||b<=0) 
      return -1; 
   while(b!=0)
   { 
     c=a%b; 
     a=b;
     b=c;
   } 
  return a; 
}   
int main(void)
	{  
	  /*********Begin*********/
	  int x,y,a;
	  scanf("%d,%d",&x,&y);
      a= MaxCommonFactor(x,y) ;	  
      printf("%d\n",a);
	  /*********End**********/ 
    return 0;
}

