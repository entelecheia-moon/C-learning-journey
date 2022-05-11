//输入
//输入十个整数。
//输出
//以从大到小的顺序输出这个十个数。
#include<stdio.h>
int main(void)
{
    /*********Begin*********/
    int a[10],i,j,tmp=0;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<9;j++){
    	for(i=j+1;i<10;i++){
        if(a[j]<a[i]){
            tmp=a[j];
            a[j]=a[i];
            a[i]=tmp;
        }
    }
	}
    
    for(i=0;i<10;i++){
           printf("%d ",a[i]);
    }
 

    /*********End**********/
    return 0;
}
