//����
//��һ�а���һ������n��  
//�ڶ��а���n���Ǹ�������Ϊ���������У������е�ÿ������������10000��  
//�����а���һ������a��Ϊ�����ҵ�����
//���
//���a�������г����ˣ��������һ�γ��ֵ�λ��(λ�ô�1��ʼ���)���������-1��
#include<stdio.h>
int main(void)
{
    /*********Begin*********/
    int n,i,b,p=-1;
    int a[1000];
    scanf("%d",&n);
    if(n>0&&n<=1000){
    	for(i=0;i<n;i++){
        	scanf("%d",&a[i]);
       }
	}
        
    scanf("%d",&b);
    for(i=0;i<n;i++){
        if(b==a[i]){
        p=1+i;
        break;
        }
	}
	printf("%d",p);

		

    /*********End**********/
    return 0;
}


//#include <stdio.h>
//int main() {
//	int n,i=0,num,p=-1;
//	int a[1000];
//	
//	scanf("%d",&n);
//	if(n>0&&n<=1000)
//	{
//		for(i=0;i<n;i++)
//		{
//			scanf("%d",&a[i]);
//		}
//	}
//	
//	scanf("%d",&num);
//	for(i=0;i<n;i++)
//	{
//		if(num==a[i])
//		{
//			p=i+1;
//			break;
//		}
//	}
//	printf("%d",p);
//	
//	return 0;
//}

