#include<stdio.h>
int main(){
	int x,y;
	scanf("%d",&x);
	if(x>0){
		y=2*x+1;
	}else if(x==0){
		y=0;
	}else {
		y=-1*x-1;
	}
	printf("y=%d",y);
	return 0;
} 
