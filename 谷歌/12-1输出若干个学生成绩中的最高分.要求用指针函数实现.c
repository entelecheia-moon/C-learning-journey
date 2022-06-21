/*任务描述
题目描述:读入n(1 <= n <= 1000)个学生的成绩，成绩都为整数，用指针函数求出若干个学生成绩的最高分。
用数组名作为函数参数，指针作为函数返回值。
输入         第一行为整数n，代表学生的数量。   第二行为n个学生的成绩，n个整数之间用一个空格隔开。
输出          输出最高分，占一行。
样例输入：80 90 85 95 91
样例输出：95             */
#include<stdio.h>
int main(void)
{
    int n,s[110],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&s[i]);
    int ans=0;
	/*********Begin*********/
	for(i=0;i<n;i++){
		if(s[i]>ans){
			ans=s[i];
		}
	}
	/*********End**********/
    printf("%d",ans );
    return 0;
}



/*
#include <stdio.h>
int max(int *a,int *b);
int main() {
    int sum,n,c;
    scanf("%d",&sum);
    int q[sum];
    for(n=0;n<sum;n++){
        scanf("%d",&q[n]);
    }
   for(n=0;n<(sum-1);n++){
         c=max(&q[n],&q[n+1]);
    }
   printf("%d",c);

}
int max(int *a,int *b){
    int r;
    r=*a>*b?*a:*b;
    return(r);
}

*/
