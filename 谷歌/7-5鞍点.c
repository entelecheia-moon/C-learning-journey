//��������
//��Ŀ����:�ҳ�����m��n�ж�ά����Array�ġ����㡱��
//����λ���ϵ�Ԫ���ڸ���������ڸ�������С������1<=m,n<=10��
//����
//���������ж��У���һ����������m��n��������m�У�ÿ����n������
//
//���
//�����и�ʽ������㣺
//Array[i][j]=x
//����x�����㣬i��jΪ�������ڵ������к����±꣬���ǹ涨�����±��0��ʼ��
//һ����ά���鲢��һ�����ڰ��㣬��ʱ�����None
//���Ǳ�֤������������������������磺
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


