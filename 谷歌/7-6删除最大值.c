//任务描述
//题目描述:输入10个互不相同的整数并保存在数组中，
//找到该最大元素并删除它，输出删除后的数组
#include<stdio.h>
int main(){
	int a[10],i,max,b[9];
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=1;i<10;i++){
		if(a[i]>max){
			max=a[i];
		}else {
			max=max;
		}
	}
	 for(i=0;i<10;i++){
	 	if(a[i]!=max){
	 		printf("%d ",a[i]);
		 }
	 }
	
	return 0;
}
