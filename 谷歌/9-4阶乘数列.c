/*
任务描述
题目描述:求Sn=1!+2!+3!+4!+5!+…+n!之值，其中n是一个数字。  
输入
一个整数n(1<=n<=20)
输出
输出表达式的值，占一行。  
样例输入：
5
样例输出：
153
提示：
用int可能会溢出,需要用能表示更大范围的long long int（注：VC6.0不支持此类型，VC下使用可使用__int64替代）
*/
#include<stdio.h>
void fun(int n){
	int i,j;
	long long int sum=0,s=1;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			s*=j;
		}
		sum+=s;
		s=1;
	}
	printf("%lld",sum);
}
int main(void)
{  
    int n,i;
    scanf("%d",&n);
	fun(n);
    return 0;
}
