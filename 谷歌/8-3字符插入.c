/*��������
��Ŀ����:���������ַ���a��b����b���е�����ַ����뵽a������С�ַ����档  
����
����һ������
���
���������ַ���a��b��
����˵��
�������룺
MynameisAmy
MynameisJane
���������
MynameisAymy
��ʾ��
�ַ������Ȳ�����100 */
#include<stdio.h>
#include<string.h>
int main(){
	char a[101];
	char b[100];
	scanf("%s",&a);
	scanf("%s",&b);
	int min,max,i,j,x,y;
	min=0;
	max=0;
	x=strlen(a);
	y=strlen(b);
	for(i=0;i<x;i++){
		if(a[min]>a[i]){
			min=i;
		}
	}
	for(j=0;j<y;j++){
		if(b[max]<b[j]){
			max=j;
		}
	}
	for(i=x;i>min;i--){
		a[i+1]=a[i];
	}
//	��9��λ�ÿճ���
//a��Сλ�õĺ��� 
	a[min+1]=b[max]; 
//	��ӽ�����,ʣ�¿ռ�,���ٴ����˷� 
	a[x+1]='\0';	
	printf("%s",a);
	return 0;
} 
