/*任务描述
题目描述：用递归求Sn=1!+2!+3!+4!+5!+…+n!之值，其中n是一个数字。
输入--一个整数n(1<=n<=20)
输出--输出表达式的值，占一行。
样例输入：5
样例输出：153             */   
#include<stdio.h>
long long solve(long long n){
    /*********Begin*********/
    long long i,s=1;
	for(i=1;i<=n;i++){
		s*=i;
	}
	return s;

    /*********End**********/
}
int main(void)
{
    long long n,i;
    scanf("%lld",&n);
    long long ans=0;
    for(i=1;i<=n;i++)
        ans+=solve(i);
    printf("%lld", ans);
    return 0;
}  
