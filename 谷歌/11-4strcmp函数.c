/*��������
��Ŀ����:��һ������ʵ�������ַ����ıȽϣ����Լ�дһ��strcmp����
����            �������ַ���
���           ��������Ǹ��ַ���
�������룺
abc
abd
���������abd              */
#include<stdio.h>
#include<string.h> 
int main()
{
  char a[100],b[100],t[100];                              
  scanf("%s",a);
  scanf("%s",b);
  if(strcmp(a,b)>0)
  {
    strcpy(t,a);
    strcpy(a,b);
    strcpy(b,t);
  }
  puts(b);
  return 0;
}

