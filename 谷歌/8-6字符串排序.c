/* 
��������
��Ŀ����������3�У�ÿ��n���ַ���������С�����˳�����  
����
3���ַ���
���
���մ�С���������3��
�������룺
cde
afg
abc
���������
abc
afg
cde
*/
#include<stdio.h>
#include<string.h>
int main(){
	char a[30],b[30],c[30],max[30];
	scanf("%s %s %s",&a,&b,&c);
	if(strcmp(a,b)>0){
		strcpy(max,a);
		strcpy(a,b);
		strcpy(b,max);
	}
	if(strcmp(a,c)>0){
		strcpy(max,a);
		strcpy(a,c);
		strcpy(c,max);
	}
	if(strcmp(b,c)>0){
		strcpy(max,b);
		strcpy(b,c);
		strcpy(c,max);
	}
	
	printf("%s\n%s\n%s",a,b,c);
	return 0;
} 
