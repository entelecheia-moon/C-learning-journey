/*
��������
��Ŀ����:����һ���ַ�(�ɿո���ĸ�����ּ�����ɣ���֤��ͷ��Ϊ�ո�)�����������ɸ��ַ�����
����Щ�ַ����ĳ��Ⱥͣ��������ַ�������,����ж��������ȳ��ֵ��Ǹ��ַ�������stop��Ϊ���������ַ�����  
����
����һ������
���
����һ���ַ�����stop��Ϊ���������ַ�����
�������룺
My name is Amy
My name is Jane
stop
���������
11 name
12 name
��ʾ��
�ַ������Ȳ�����100��
*/
#include<stdio.h>
#include <string.h>
int main(void)
{
    /*********Begin*********/
    char a[100];
    int i, j, pos = 0;
    int str_len, word_len, max_word_len;
 
    while(1) {
        str_len = word_len = max_word_len = 0;
 
         fgets(a, 100, stdin);//fgets�������÷�
 
        if (strlen(a) <= 1)//������ַ�ֻ��һ�������
            continue;
        if (strlen(a) < 99)   //remove '\n'
            a[strlen(a)-1] = 0;
 
        if(strncmp(a,"stop", strlen("stop"))==0)
            break;
        for(i = 0; a[i] !='\0'; i++) {
            if(a[i] != ' ') {
                word_len++;
                str_len++;
                continue;
            }
            if (word_len  > max_word_len) {
                max_word_len = word_len;
                pos = i - word_len;
            }
            word_len = 0;
        }
        if (word_len  > max_word_len) {
            max_word_len = word_len;
            pos = i - word_len;
        }
 
        printf("%d ", str_len);
        for (i = pos; i < pos + max_word_len; i++)
            printf("%c", a[i]);
        putchar(10);
    }
 
    /*********End**********/
    return 0;
}

