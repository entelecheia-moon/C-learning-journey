//��������
//��Ŀ����:����10��������ͬ�������������������У�
//�ҵ������Ԫ�ز�ɾ���������ɾ���������
#include<stdio.h>
int main(){
	int a[10],i,max,b[9];
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=1;i<10;i++){
		if(a[i]>max){
			max=a[i];
		}else {
			max=max;
		}
	}
	 for(i=0;i<10;i++){
	 	if(a[i]!=max){
	 		printf("%d ",a[i]);
		 }
	 }
	
	return 0;
}
