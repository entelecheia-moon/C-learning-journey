/*��������
��Ŀ��������д���������ַ���s1��s2�Լ�����λ��f��
���ַ���s1�е�ָ��λ��f�������ַ���s2��������"BEIJING"�� "123"�� 3�������:"BEI123JING"��  
����
��һ�к͵ڶ��зֱ����������ַ���s1��s2���������������λ��f��
ÿ���ַ����ĳ��Ȳ�����100���ַ���
���
���һ�в������ַ�����
����˵��
�������룺
BEIJING
123
3
���������
BEI123JING
*/

/*
#include<stdio.h>
#include<string.h> 
int main(){
	char s1[100];
	char s2[100];
	int f,x,y,i;
	scanf("%s",&s1);
	scanf("%s",&s2);
	scanf("%d",&f);
	x=strlen(s1);
	y=strlen(s2);
	x--;
//	printf("%d",x);
	for(i=x;i>f;i--){
		s1[i+y]=s1[i];
	}
	printf("%s\n",s1);
	for(i=0;i>y;i++){
		s1[f]=s2[i];
		f++;
	}
	printf("%s",s1);
	return 0;
}
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
    /*********Begin*********/
    char t[100],s[100];
    int i,j,f;
    gets(t);
    gets(s);
    scanf("%d",&f);
    for(i=0;i<strlen(t);i++)
    {
        printf("%c",t[i]);
        if(i+1==f)
        {
            for(j=0;j<strlen(s);j++)
                printf("%c",s[j]);
        }
    }
    /*********End**********/
    return 0;
}

