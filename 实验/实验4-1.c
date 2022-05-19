#include<stdio.h>
int main(){
	int n,i,a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int x=a[0];
	for(i=1;i<n;i++){
		if(x>a[i]){
			x=a[i];
		}
	}
	printf("%d",x);
	return 0;
} 
