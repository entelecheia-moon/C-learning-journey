/*任务描述
本关任务：从键盘输入两个学生的学号，姓名和成绩（整数），分别存入结构体中，输出成绩较高的学生的学号，姓名和成绩。  */
#include<stdio.h>
/*********Begin*********/
int main()
{
    struct data
	{
        char num[20];
        char name[20];
        int score;
    }s1,s2;
    scanf("%s%s%d",s1.num,s1.name,&s1.score);
    scanf("%s%s%d",s2.num,s2.name,&s2.score);
    if(s1.score>s2.score)
    {
        printf("%s %s %d\n",s1.num,s1.name,s1.score);
    }
    else
    {
        printf("%s %s %d\n",s2.num,s2.name,s2.score);
    }
    return 0;
}
