//任务描述
//题目描述:找出具有m行n列二维数组Array的“鞍点”，
//即该位置上的元素在该行上最大，在该列上最小，其中1<=m,n<=10。
//输入
//输入数据有多行，第一行有两个数m和n，下面有m行，每行有n个数。
//
//输出
//按下列格式输出鞍点：
//Array[i][j]=x
//其中x代表鞍点，i和j为鞍点所在的数组行和列下标，我们规定数组下标从0开始。
//一个二维数组并不一定存在鞍点，此时请输出None
//我们保证不会出现两个鞍点的情况，比如：
//3 3
//1 2 3
//1 2 3
//3 6 8

//#include<stdio.h>
//int main(){
//	int m,n,a[10][10],i,j;
//	scanf("%d %d",&m,&n);
//	for(i=0;i<m;i++){
//		
//		for(j=0;j<n;j++){
//			if(a[i][j]>a[i][j+1]){
//				
//			} 
//			scanf("%d",a[i][j]);
//		}
//	}
//	for(i=0;i<m;i++){
//		a[i]
//	}
//	return 0;
//} 
#define N 10
#include <stdio.h>
int Maxcol(int a[][N],int n,int row){
    int i,maxcol=0;
    for(i=1;i<n;i++)
        if (a[row][i]>a[row][maxcol]) maxcol=i;
    return maxcol;
}
int Minrow(int a[][N],int m,int col){
    int i,minrow=0;
    for(i=1;i<m;i++)
        if (a[i][col]<a[minrow][col]) minrow=i;
    return minrow;
}
int main(){
    int m,n,i,j;
    int maxcol,minrow;
    int a[N][N];
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++) for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    for(i=0;i<m;i++){
        maxcol=Maxcol(a,n,i);
        minrow=Minrow(a,m,maxcol);
        if (i==minrow){
            printf("Array[%d][%d]=%d",i,maxcol,a[i][maxcol]);
            break;
        }
    }
    if(i>=m) printf("None");
}


