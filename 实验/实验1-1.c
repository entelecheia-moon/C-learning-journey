#include <stdio.h>
int main() 
{
	int i=1,j=2,k=3;
	int x,y,z1,z2,z3,z;
	x=k/j;
	y=k%j;
	z=i+++j;
	z1=++i;z2=i--;z3=i++;
	printf("x=%d,y=%d,z=%d\n",x,y,z);
	printf("z1=%d,z2=%d,z=%d,i=%d\n",z1,z2,z3,i);
 } 
