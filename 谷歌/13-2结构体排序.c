/*��������
����������n��ѧ������Ϣ(����ѧ�ţ��������ɼ�)��Ҫ���ճɼ��ĸߵ�˳�����ѧ������Ϣ��
�������룺  
5  
10101 Zhang 78  
10103 Wang 98  
10106 Li 86  
10108 Ling 73  
10110 Sun 100  
Ԥ�������  
10110 Sun 100  
10103 Wang 98  
10106 Li 86  
10101 Zhang 78  
10108 Ling 73  
������������˵����
��һ��Ϊ����n��ʾ��n��ѧ���� 1<=n<=200������������n�����ݣ�ÿ�����ݴ���һ��ѧ������Ϣ��
��ѧ�ţ�11λ�����������������ַ��������Ȳ�����20���ͳɼ�����������        */ 
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
