/*任务描述
题目描述:对输入的两个整数a，b，用指针变量作为函数参数，交换a和b的值。
输入      两个整数a b
输出      输出用函数交换处理后的值a b
样例输入：1 2
样例输出：2 1         */
#include<stdio.h>
int main(void)
{
	int a,b,*p1=&a,*p2=&b,*p;
	scanf("%d %d",&a,&b);
	p=p1;
	p1=p2;
	p2=p;
	printf("%d %d",*p1,*p2);
    return 0;
}
