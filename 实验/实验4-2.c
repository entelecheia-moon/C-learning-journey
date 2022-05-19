#include<stdio.h>
int main(){
	int n,a,b,c,t,i=0;
	printf("输入一位三位数:");
	scanf("%d",&n);
	while(n!=495){
		i++;
		a=n/100;
		b=n/10%10;
		c=n%10;
		if(a==b&&b==c)
		return 0;
		if(a>b){
            t=a;
            a=b;
            b=t;
        }
        if(a>c){
            t=c;
            c=a;
            a=t;
        }
        if(b>c){
            t=b;
            b=c;
            c=t;
        }
        int min=a*100+b*10+c;
        int max=c*100+b*10+a;
        n=max-min;
        printf("%d: %d - %d = %d\n",i,max,min,n);
        if(n==495){
        	break;
		}
	}
	return 0;
} 



