/*
任务描述
题目描述:写两个函数，分别求两个整数的最大公约数和最小公倍数，用主函数调用这两个函数，并输出结果。两个整数由键盘输入。  
输入
两个正整数
输出
最大公约数 最小公倍数15 6
如果输入的数中包含负数，则输出Input Error
样例输入： 6 15
样例输出： 3 30
提示：  
负数没有最大公约数和最小公倍数；
最大公约数和最小公倍数一定为正数，不可以为负数；              需要考虑代码运行效率，否则会评测超时。           */
#include<stdio.h>
void fun(int x,int y){
	long long int m, n,z;
	m = x, n = y;
    if(x>0&&y>0)
	{
		while (y != 0)
		{
			z = x%y;
			x = y;
			y = z;
		}
		printf("%ld ", x);
		printf("%ld", m*n / x);
	}else{
		printf("Input Error");
	} 
}
int main(void)
{  
    long long int x,y;
    scanf("%lld %lld",&x,&y);
    fun(x,y);
    return 0;
}



