//本关任务：一个数如果恰好等于它的因子之和，这个数就称为"完数"。
// 例如，6的因子为1、2、3，而6=1+2+3，因此6是"完数"。 
// 编程序找出1000之内的所有完数。
//#include<stdio.h>
//	int main(void)
//	{  
//	int n;
//	scanf("%d",n);
//	int i,j,s=0;
//	  /*********Begin*********/
//	  for(i=1;i<=n;i++){
//	  	int x=0;
//		  for(j=1;j<i;j++) {
//			  if(i%j==0){
//			  	  x=1;
//				  s+=j;
//			  }
//		  }
//		  if(s==i&&x==1){
//			  printf("%d\n",i);
//		  }
//	  }
//	  
//	  /*********End**********/ 
//       return 0;
//	}

#include<stdio.h>
	int main(void)
	{  
	  int i,n;
	  scanf("%d",&n);
	  for(i=1;i<=n;i++){
		  int sum=0;
		  int t=1;
		  int x=0;
		  while(t<i){
			  if(i%t==0){
				  x=1;
				  sum+=t;
			  }
			  t++;
		  }
		  if(sum==i&&x==1){
			  printf("%d\n",i);
		  }
	  }
       return 0;
	}




