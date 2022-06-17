/*任务描述
题目描述:输入两个字符串a和b，将b串中的最大字符插入到a串中最小字符后面。  
输入
输入一段文字
输出
输入两个字符串a和b。
测试说明
样例输入：
MynameisAmy
MynameisJane
样例输出：
MynameisAymy
提示：
字符串长度不超过100 */
#include<stdio.h>
#include<string.h>
int main(){
	char a[101];
	char b[100];
	scanf("%s",&a);
	scanf("%s",&b);
	int min,max,i,j,x,y;
	min=0;
	max=0;
	x=strlen(a);
	y=strlen(b);
	for(i=0;i<x;i++){
		if(a[min]>a[i]){
			min=i;
		}
	}
	for(j=0;j<y;j++){
		if(b[max]<b[j]){
			max=j;
		}
	}
	for(i=x;i>min;i--){
		a[i+1]=a[i];
	}
//	把9的位置空出来
//a最小位置的后面 
	a[min+1]=b[max]; 
//	添加结束符,剩下空间,减少储存浪费 
	a[x+1]='\0';	
	printf("%s",a);
	return 0;
} 
