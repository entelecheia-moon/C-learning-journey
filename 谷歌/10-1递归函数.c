/*��������
��Ŀ�������õݹ���Sn=1!+2!+3!+4!+5!+��+n!ֵ֮������n��һ�����֡�
����--һ������n(1<=n<=20)
���--������ʽ��ֵ��ռһ�С�
�������룺5
���������153             */   
#include<stdio.h>
long long solve(long long n){
    /*********Begin*********/
    long long i,s=1;
	for(i=1;i<=n;i++){
		s*=i;
	}
	return s;

    /*********End**********/
}
int main(void)
{
    long long n,i;
    scanf("%lld",&n);
    long long ans=0;
    for(i=1;i<=n;i++)
        ans+=solve(i);
    printf("%lld", ans);
    return 0;
}  
