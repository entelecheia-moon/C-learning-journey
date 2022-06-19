/* 
任务描述
题目描述:给你一个n，要求你编写一个函数求1+2+.......+n.
输入
输入一个n
输出
输出1+2+.......+n的和
测试说明
样例输入：
100
样例输出：
5050
*/
#include<stdio.h>
void Sum(int n){
	int i,sum=0;
	for(i=0;i<=n;i++){
		sum+=i;
	}
	printf("%d",sum);
}
int main(){
	int n;
	scanf("%d",&n);
	Sum(n);
} 

