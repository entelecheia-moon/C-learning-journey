/*
��������
��Ŀ����:��Sn=1!+2!+3!+4!+5!+��+n!ֵ֮������n��һ�����֡�  
����
һ������n(1<=n<=20)
���
������ʽ��ֵ��ռһ�С�  
�������룺
5
���������
153
��ʾ��
��int���ܻ����,��Ҫ���ܱ�ʾ����Χ��long long int��ע��VC6.0��֧�ִ����ͣ�VC��ʹ�ÿ�ʹ��__int64�����
*/
#include<stdio.h>
void fun(int n){
	int i,j;
	long long int sum=0,s=1;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			s*=j;
		}
		sum+=s;
		s=1;
	}
	printf("%lld",sum);
}
int main(void)
{  
    int n,i;
    scanf("%d",&n);
	fun(n);
    return 0;
}
