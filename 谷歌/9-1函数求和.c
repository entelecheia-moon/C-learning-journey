/* 
��������
��Ŀ����:����һ��n��Ҫ�����дһ��������1+2+.......+n.
����
����һ��n
���
���1+2+.......+n�ĺ�
����˵��
�������룺
100
���������
5050
*/
#include<stdio.h>
void Sum(int n){
	int i,sum=0;
	for(i=0;i<=n;i++){
		sum+=i;
	}
	printf("%d",sum);
}
int main(){
	int n;
	scanf("%d",&n);
	Sum(n);
} 

