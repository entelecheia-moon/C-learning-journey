//�������񣺱�дһ��������������n����S=1!+2!+...+n!��  
//ע�⣺n!��ʾn�Ľ׳ˡ�0�Ľ׳˵���1�������Ľ׳˵���0��
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

