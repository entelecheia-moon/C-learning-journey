#include<stdio.h>
int main(){
	int n,a[10],i,t;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int x;
	scanf("%d",&x);
	a[n]=x;
	for(i=0;i<n+1;i++){
		if(a[i]>a[n]){
			t=a[i];
			a[i]=a[n];
			a[n]=t;
		}
	}
	for(i=0;i<n+1;i++){
		printf("%d",a[i]);
	}
	return 0;
}



//#include<stdio.h>
//int main(){
//	int n;
//	int a[99];
//	scanf("%d",&n);
//	for(int i=0;i<n;i++){
//	  scanf("%d",&a[i]);
//	}
//	int x;
//	scanf("%d",&x);
//	for(int i=n-1;i>=0;i--){
//		if(x>a[i]){ //保证最前面元素插入正确 
//			a[i+1]=a[i];
//			a[i]=x;
//		}
//		else{
//			a[i+1]=x;//保证最后面的元素插入正确 
//			break;//一定要有break跳出当前循环哦 
//		}
//	}
//	for(int i = 0; i < n + 1; i++){
//    printf("%d ", a[i]);
//    } 
//    return 0;
//}
