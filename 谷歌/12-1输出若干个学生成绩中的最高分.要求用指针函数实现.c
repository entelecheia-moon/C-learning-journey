/*��������
��Ŀ����:����n(1 <= n <= 1000)��ѧ���ĳɼ����ɼ���Ϊ��������ָ�뺯��������ɸ�ѧ���ɼ�����߷֡�
����������Ϊ����������ָ����Ϊ��������ֵ��
����         ��һ��Ϊ����n������ѧ����������   �ڶ���Ϊn��ѧ���ĳɼ���n������֮����һ���ո������
���          �����߷֣�ռһ�С�
�������룺80 90 85 95 91
���������95             */
#include<stdio.h>
int main(void)
{
    int n,s[110],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&s[i]);
    int ans=0;
	/*********Begin*********/
	for(i=0;i<n;i++){
		if(s[i]>ans){
			ans=s[i];
		}
	}
	/*********End**********/
    printf("%d",ans );
    return 0;
}



/*
#include <stdio.h>
int max(int *a,int *b);
int main() {
    int sum,n,c;
    scanf("%d",&sum);
    int q[sum];
    for(n=0;n<sum;n++){
        scanf("%d",&q[n]);
    }
   for(n=0;n<(sum-1);n++){
         c=max(&q[n],&q[n+1]);
    }
   printf("%d",c);

}
int max(int *a,int *b){
    int r;
    r=*a>*b?*a:*b;
    return(r);
}

*/
