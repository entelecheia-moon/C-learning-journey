#include<stdio.h> 
int main() 
{ 
 int score;
 printf("请输入你的分数");
 scanf("%d",&score);
 if(score>=85) {
 	printf("你的等级为A");
 } else if (score>=70) {
 	printf("你的等级为B");
 }else if(score>=60) {
 	printf("你等级为C");
 } else {
 	printf("你的等级为D");
 }
 return 0;
} 
