#include<stdio.h>
int main(){
	int n,a[20],*p,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	p=a;
	for(i=0;i<n;i++){
		if(*p<a[i]){
			p=&a[i];
		}
	}
	printf("%d",*p);
	return 0;
}
