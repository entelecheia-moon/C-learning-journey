#include<stdio.h>

float aver(int(*p)[5])
{
	int ans=0,i; 
	float sum; 
	for(i=0;i<4;i++)
	{
		ans+=*(*(p+i));
	} 
	sum=ans*1.0/4;
	return sum;
}
void search_1(int *p) 
{
	int i,j,m;
	for(i=0;i<4;i++)
	{
		int num=0; 
		float ans=0.0; 
		for(j=0;j<5;j++)
		{
			if(*(p+i*5+j)<60)
				num++;
			if(num>=2&&(j%4==0)) 
			{
				printf("(2)两门以上课程不及格的学生的全部课程成绩:");
				for(m=0;m<5;m++)
				{
					printf("%d\t",*(p+i*5+m));
					ans+=*(p+i*5+m)*1.0;
				}
				printf("\n");
				printf("(2)两门以上课程不及格的学生的平均成绩:%.3f\n",ans/5);
			}
		}
	}
}
void search_2(int *p)
{
	int i,j,m;
	for(i=0;i<4;i++)
	{
		int num=0,j,m;
		float ans=0;
		float ans_1=0;
		for(j=0;j<5;j++)
		{
			ans_1=ans_1+(*(p+i*5+j)*1.0);
			if(*(p+i*5+j)>=85)
			{
				num++;
			}
			if(num==5&&(j%4==0))
			{
				printf("(3)全部课程成绩都在85分以上的学生的全部课程成绩:");
				for(m=0;m<5;m++)
				{
					printf("%d\t",*(p+i*5+m));
					ans+=*(p+i*5+m)*1.0;
				}
				printf("\n");
				printf("(3)全部课程成绩都在85分以上的学生平均成绩:%.3f\n",ans/5);
			}
		}
		if(ans_1/5>=90)
		{
			printf("(3)平均成绩在90分以上的学生全部课程成绩: ");
			for(m=0;m<5;m++)
			{
				printf("%d\t",*(p+i*5+m));
			}
			printf("\n");
			printf("(3)平均成绩在90分以上的学生平均成绩: %.3f\n",ans_1/5);
		}
	}
}
int main()
{
	int a[4][5]={{34,56,88,99,89},{27,88,99,67,78},{99,90,87,86,89},{78,89,99,56,77}};
	printf("(1)求第一门课程的平均分:%.3lf\n",aver(a)); 
	search_1(a[0]);
	search_2(a[0]);
	return 0;
} 


