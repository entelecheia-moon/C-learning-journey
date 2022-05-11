//输入
//第一行包含一个整数n。  
//第二行包含n个非负整数，为给定的数列，数列中的每个数都不大于10000。  
//第三行包含一个整数a，为待查找的数。
//输出
//如果a在数列中出现了，输出它第一次出现的位置(位置从1开始编号)，否则输出-1。
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

