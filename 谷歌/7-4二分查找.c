//任务描述
//题目描述:将n个从小到大排序的整数（n<1000000）从1~n进行编号，
//并一个待查找的整数m，请使用二分法进行查找。
//输入
//输入包括3行，第一行为整数n，第二行包括n个整数，以空格分隔，第三行为整数m。  
//输出
//如果能够在序列中找到整数m，则输出编号（如果存在多个编号，返回编号最小的），
//如果不存在，则输出None。
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



