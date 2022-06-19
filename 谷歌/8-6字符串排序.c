/* 
任务描述
题目描述：输入3行，每行n个字符串，按由小到大的顺序输出  
输入
3行字符串
输出
按照从小到大输出成3行
样例输入：
cde
afg
abc
样例输出：
abc
afg
cde
*/
#include<stdio.h>
#include<string.h>
int main(){
	char a[30],b[30],c[30],max[30];
	scanf("%s %s %s",&a,&b,&c);
	if(strcmp(a,b)>0){
		strcpy(max,a);
		strcpy(a,b);
		strcpy(b,max);
	}
	if(strcmp(a,c)>0){
		strcpy(max,a);
		strcpy(a,c);
		strcpy(c,max);
	}
	if(strcmp(b,c)>0){
		strcpy(max,b);
		strcpy(b,c);
		strcpy(c,max);
	}
	
	printf("%s\n%s\n%s",a,b,c);
	return 0;
} 
