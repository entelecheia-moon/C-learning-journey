#include<stdio.h>
	int main(void)
	{  
	/********* Begin *********/
	int a,b,c;
	printf("");
	scanf("%d,%d,%d",&a,&b,&c);
	int max=0;
	if(a>b)
	{max=a;
	if(max>c){
		max=max;
	}else {
		max=c;
	} 
	}
	else{
	max=b;
	if(max>c){
		max=max;
	}else {
		max=c;
	}
	}
	printf("max=%d\n",max);
	return 0;	
	
	/********* End *********/
	}


