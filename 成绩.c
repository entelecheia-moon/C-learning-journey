#include<stdio.h> 
int main() 
{ 
 int score;
 printf("��������ķ���");
 scanf("%d",&score);
 if(score>=85) {
 	printf("��ĵȼ�ΪA");
 } else if (score>=70) {
 	printf("��ĵȼ�ΪB");
 }else if(score>=60) {
 	printf("��ȼ�ΪC");
 } else {
 	printf("��ĵȼ�ΪD");
 }
 return 0;
} 
