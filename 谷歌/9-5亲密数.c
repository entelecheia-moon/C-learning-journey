/*
任务描述
题目描述:两个不同的自然数A和B，如果整数A的全部因子(包括1，不包括A本身)之和等于B；且整数B的全部因子(包括1，不包括B本身)之和等于A，
则将整数A和B称为亲密数。求3000以内的全部亲密数。  
输入
无需输入
输出
3000以内的全部亲密数(输出格式：(A,B)，不加换行，不加分隔符号)
一对亲密数只输出一次，小的在前
样例输出：
(220,284)(1184,1210)(2620,2924)
提示：
按照亲密数定义，要判断数a是否有亲密数，只要计算出a的全部因子的累加和为b，再计算b的全部因子的累加和为n，若n等于a则可判定a和b是亲密数。
计算数a的各因子的算法：用a依次对i(i=1~a/2)进行模运算，若模运算结果等于0，则i为a的一个因子；否则i就不是a的因子。      */
#include<stdio.h>
void solve(){
	int a, i, b, n;
    for (a = 1; a < 3000; a++)
    {   
        for (b = 0, i = 1; i <= a / 2; i++ )
        {
            if(! (a % i)) 
                b += i; 
        }
        for (n = 0, i = 1; i <= b/2; i++)
        {
            if(! (b % i)) 
                n += i;
        }
        if(n == a && a < b)
            printf("(%d,%d)", a, b); 
    }   
}
int main(void)
{  
    solve();
    return 0;
}



