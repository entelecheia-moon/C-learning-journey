/*��������
����������������ѡ�ˣ�ÿ��ѡ��ֻ��ͶһƱ��дһ�����ýṹ��洢���ݣ������Ʊ�����
������ѡ��Ϊ"Li"�� "Zhang"��"Sun"��
�������룺  
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
Ԥ�������  
Li:4  
Zhang:2  
Sun:3  
������������˵����
�������ݵ�һ�а���һ������n����ʾ��n����ͶƱ����������ÿһ�а���ĳ����ѡ�˵����֡�        */ 
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
