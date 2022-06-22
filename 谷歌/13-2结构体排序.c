/*任务描述
本关任务：有n个学生的信息(包括学号，姓名，成绩)，要求按照成绩的高低顺序输出学生的信息。
测试输入：  
5  
10101 Zhang 78  
10103 Wang 98  
10106 Li 86  
10108 Ling 73  
10110 Sun 100  
预期输出：  
10110 Sun 100  
10103 Wang 98  
10106 Li 86  
10101 Zhang 78  
10108 Ling 73  
测试输入数据说明：
第一行为整数n表示有n个学生， 1<=n<=200。接下来包含n行数据，每行数据代表一个学生的信息，
按学号（11位的整数），姓名（字符串，长度不超过20）和成绩（整数）。        */ 
#include<stdio.h>
struct Student 
{
	long number;
	char name[20];
	int score;
} stu[200], temp;
int main() 
{
	int n, i, j;	
	scanf("%d", &n);
	for (i = 0; i < n; i++) 
	{	
		scanf("%ld", &stu[i].number);
		scanf("%s", stu[i].name);	
	    scanf("%d", &stu[i].score);
	}
	for (i = 0; i < n - 1; i++) 
	{
		for (j = i + 1; j < n; j++) 
		{
			if (stu[j].score > stu[i].score) 
			{
				temp = stu[j];
				stu[j] = stu[i];
				stu[i] = temp;
			}
		}
	}
	for (i = 0; i < n; i++) 
	{
		printf("%ld %s %d\n", stu[i].number, stu[i].name, stu[i].score);
	}
	return 0;
}
