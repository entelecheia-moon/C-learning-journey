/*任务描述
题目描述:用指针法输入12个整数，然后按每行4个数输出
输入        输入包含一行，有12个整数。
输出        按顺序，每行输出4个整数。
样例输入：1 2 3 4 5 6 7 8 9 10 11 12
样例输出：
1 2 3 4
5 6 7 8
9 10 11 12             */
#include<stdio.h>
int main(void)
{
    int a[12],i,j,n,*b;
    b=a;
    for(i=0;i<12;i++){
    	scanf("%d",b++);
	}
	b=a;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++,b++){
			if(j==3){
				printf("%d",*b);
			}else{
				printf("%d ",*b);
			}
		}
		printf("\n");
	}
    return 0;
}

