//����Ŀ˵�����Ӽ������� n(n<10)��������ƺͶ��ۣ��ýṹ�����͵������ʾ����
//���в��Ҷ�����ߺ���͵�������ƺͶ��ۣ���������Ա�д��Ӧ����
#include<stdio.h>
#include<string.h>
struct book{
	char name[40];
	double price;
};
int main(){
	int n,i,index;
	double max=-1;
	scanf("%d",&n);
	struct book a[20];
	for(i=0;i<n;i++){
		getchar();
		gets(a[i].name);
		scanf("%lf",&a[i].price);
		if(a[i].price>max){
			max=a[i].price;
			index=i;
		}
	}
	printf("highest price: %.1f, %s",max,a[index].name);
	return 0;
} 

