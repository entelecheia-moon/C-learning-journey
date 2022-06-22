/*任务描述
本关任务：有三个候选人，每个选民只能投一票，写一程序，用结构体存储数据，求出得票结果。
三个候选人为"Li"， "Zhang"，"Sun"。
测试输入：  
10  
Li  
Li  
Sun  
Zhang  
Zhang  
Sun  
Li  
Sun  
Zhang  
Li  
预期输出：  
Li:4  
Zhang:2  
Sun:3  
测试输入数据说明：
输入数据第一行包含一个整数n，表示有n个人投票。接下来的每一行包含某个候选人的名字。        */ 
#include<stdio.h>
#include<string.h>
struct person{
	char name[20];
	int count;
}leader[3]={"Li",0,"Zhang",0,"Sun",0};
int main(void)
{
	int n,i,j;
	char leader_name[20];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",leader_name);
		for(j=0;j<3;j++){
			if(strcmp(leader_name,leader[j].name)==0)
			leader[j].count++;
		}
	}
	for(i=0;i<3;i++){
		printf("%s:%d\n",leader[i].name,leader[i].count);
	}
    return 0;
}
