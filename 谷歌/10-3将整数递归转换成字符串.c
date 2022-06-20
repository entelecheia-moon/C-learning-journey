/*任务描述
题目描述：用递归法将一个整数n转换成字符串。例如，输入n为483，输出字符串 4 8 3，每个数字后面接一个空格用于隔开字符。
输入     一个整数n
输出     相应的用空格隔开的数字字符。
特别注意：输出字符之间有空格
样例输入： 483
样例输出：4 8 3            */

#include<stdio.h>
void solve(int n){
    int temp=n%10;
    /*********Begin*********/
	if((n/=10)!=0) solve(n);

    /*********End**********/
    if(n)
        printf(" %d", temp);
    else
        printf("%d", temp);
}
int main(void)
{
    int n;
    scanf("%d",&n);
    solve(n);
    return 0;
}

