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
//		if(x>a[i]){ //��֤��ǰ��Ԫ�ز�����ȷ 
//			a[i+1]=a[i];
//			a[i]=x;
//		}
//		else{
//			a[i+1]=x;//��֤������Ԫ�ز�����ȷ 
//			break;//һ��Ҫ��break������ǰѭ��Ŷ 
//		}
//	}
//	for(int i = 0; i < n + 1; i++){
//    printf("%d ", a[i]);
//    } 
//    return 0;
//}
