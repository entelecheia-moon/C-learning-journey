//【项目说明】从键盘输入 n(n<10)本书的名称和定价（用结构体类型的数组表示），
//从中查找定价最高和最低的书的名称和定价，并输出。试编写相应程序。
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

