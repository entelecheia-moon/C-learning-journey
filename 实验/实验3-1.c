#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,p,s;
	scanf("%d,%d,%d",&a,&b,&c);
	p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	if(a+b<=c||a+c<=b||b+c<=a){
		printf("�����߲���Χ��������");
	}else{
		printf("���������Ϊ%d",s);
	}
	return 0;
} 
