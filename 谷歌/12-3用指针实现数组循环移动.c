/*��������
��Ŀ����:��n��������Ҫ�����дһ������ʹ������ѭ���ƶ�m��λ��
����      ����n m��ʾ��n���������ƶ�mλ  
���      ����ƶ��������
�������룺10 5
1 2 3 4 5 6 7 8 9 0
���������6 7 8 9 0 1 2 3 4 5           */
#include<stdio.h>
int *solve(int *s,int n,int m){
    /*********Begin*********/
	int i=0,j;
    int k=n-m;
    static int a[100];
    for(j=0;j<n;j++){
        if(j<k&&j<m){
            a[j]=*(s+k+j);
        }else{
            a[j]=*(s+i);
            i++;
        }
    }
return a;
    /*********End**********/
}
int main(void)
{
    int i,n,m,s[110];
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
        scanf("%d",&s[i]);
    int *ans;
    /*********Begin*********/
	ans=solve(s,n,m);
    /*********End**********/
    for(i=0;i<n;i++){
        if(i==0)    printf("%d",*ans++ );
        else    printf(" %d",*ans++ );
    }
    return 0;
}
