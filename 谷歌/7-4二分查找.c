//��������
//��Ŀ����:��n����С���������������n<1000000����1~n���б�ţ�
//��һ�������ҵ�����m����ʹ�ö��ַ����в��ҡ�
//����
//�������3�У���һ��Ϊ����n���ڶ��а���n���������Կո�ָ���������Ϊ����m��  
//���
//����ܹ����������ҵ�����m���������ţ�������ڶ����ţ����ر����С�ģ���
//��������ڣ������None��
#include<stdio.h>
int main()
{
 int m,n,left,right,mid,i,a[100];
 scanf("%d",&n);
 for (i=0;i<n;i++){
 	scanf("%d",&a[i]);
 }
 scanf("%d",&m);
 left=1;
 right=n;
 while (left <= right)
 {
 	mid = (left + right) / 2;
 	if (a[mid-1] > m)
   	{
   	right = mid-1;
  	}
  	else if (a[mid-1] < m) 
  	{
   	left = mid+1;
  	}
  	else
  	{
   	printf("%d\n", mid);
   	break;
  	}
 }
 if (left > right) 
 {
  	printf("None");
 }
 return 0;
}



