/*任务描述
题目描述：编写程序，输入字符串s1和s2以及插入位置f，
在字符串s1中的指定位置f处插入字符串s2。如输入"BEIJING"， "123"， 3，则输出:"BEI123JING"。  
输入
第一行和第二行分别输入两个字符串s1和s2，第三行输入插入位置f。
每个字符串的长度不超过100个字符。
输出
输出一行插入后的字符串。
测试说明
样例输入：
BEIJING
123
3
样例输出：
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

