//��������
//������������һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ�����֡��ո�������ַ��ĸ�����
#include<stdio.h>
int main(void)
{
    char t;
    int x=0,b=0,c=0,d=0;
    scanf("%c",&t);
    while(t!='\n'){
        if((t>='a'&&t<='z')||(t>='A'&&t<='Z')){
            x++;
        }else if((t>='0'&&t<='9')){
            b++;
        }else if(t==' '){
            c++;
        }else{
            d++;
        }
        scanf("%c",&t);
    }
    printf("%d %d %d %d\n",x,b,c,d);
    return 0;
}
