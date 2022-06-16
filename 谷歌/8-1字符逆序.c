//任务描述
//题目描述:输入一个字符串，输出反序后的字符串。
#include<stdio.h>
int main(){
	char a[100];
	int i=0,j=0,t=0,k;
	scanf("%s",a);
	while(a[i]!='\0'){
		i++;
		j++;
	}
	for(i=0,k=j-1;i<k;i++,k--){
		t=a[i];
		a[i]=a[k];
		a[k]=t;
	}
	for(i=0;i<=j;i++){
		printf("%c",a[i]);
	}
	return 0;
} 
