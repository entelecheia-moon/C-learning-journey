#include <stdio.h>
int main()
{    int a=15;
   long b=80000;
   float c=123.456;
   double d=12345678.1234567;
   char p='a';
   printf("a=%+d,%-05d,%o,%x\n",a,a,a,a);
   printf("b=%ld,%5ld,%d,%f\n",b,b,b,b);
   printf("c=%f,%g,%010.4lf,%e\n",c,c,c,c);
   printf("d=%lf,%f,%g\n",d,d,d);
   printf("p=%c,%8c\n",p,p);
   printf("%o,%#o,%X,%#X\n",a,a,a,a);
   return 0;
}

