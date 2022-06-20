/*任务描述
题目描述：编写一个递归函数，将一个整数n逆序输出，比如，n = 12345，输出54321。  
输入    一个整数n。  
输出    该整数的逆序。
####测试说明
样例输入：  12345
样例输出：  54321                */

#include<stdio.h>
void solve(int n){
    printf("%d", n%10);
    n=n/10;
    if(n>0) solve(n);
}
int main(void)
{
    int n;
    scanf("%d",&n);
    solve(n);
    return 0;
}

