#include<stdio.h>
int main(){
    int i,j;
    double x,y,z,ave;
    printf("������������:");
    scanf("%lf %lf %lf",&x,&y,&z);
    ave= (x+y+z)/3.0;
    i=ave*100;
    i=i%10;//�õ�С����ٷ�λ�ϵ���
    j=ave*10;
    if(i>=5){
        j+=1;
        ave=(double)j/10;
    }else{
        ave=(double)j/10;
    }
     
    printf("ave=%.1f\n",ave);
}

