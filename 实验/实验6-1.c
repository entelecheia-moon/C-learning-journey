#include<stdio.h>
int prime(int a); 
#include<math.h>
int main(){
	int m,n,i,a,count=0,sum=0;
	printf("输入两个正整数m,n(用,隔开):");
	scanf("%d,%d",&m,&n); 
	for(i=m;i<=n;i++){
		if(prime(i)){
		count++;
		sum=sum+i;
	}
}
    printf("素数个数为：%d,素数的和为：%d",count,sum);
    return 0;
}
	int prime(int a){
    int i;
	if(a==1) return 0;
    for(i=2;i<=sqrt(a);i++){
    	if(a%i==0) return 0;
	}
	return 1;    
} 	
