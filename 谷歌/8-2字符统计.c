/*��������
��Ŀ����:���ڸ�����һ���ַ�����ͳ�����������ַ����ֵĴ�����  
����
���������ж��У���һ����һ������n����ʾ����ʵ���ĸ������������n�У�
ÿ�а���һ������ĸ��������ɵ��ַ�����
���
����ÿ������ʵ��������ô�����ֵ�ĸ�����ÿ�����ռһ�С�*/
#include<stdio.h>
#include<string.h>
 
int main(void)
{
    int n,count,i,k,j,w;
    char a[100];
    scanf("%d",&n);
    w = n;
    int b[100]={0};
    while(n > 0)
    { 
        count = 0;
        scanf("%s",a); 
        k = strlen(a);
         
        for(i=0; i<k; i++)
        {
            if(a[i]<='9' && a[i]>='0')
            {
                count++;
            }
        } 
        b[n-1] = count;
        n--;
    }
    for(j=w-1; j>=0; j--)
    {
        printf("%d", b[j]);
        if(j>0)
        printf("\n");
    }
 
    return 0;
}



