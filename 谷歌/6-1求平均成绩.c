//�������񣺱�дһ����������ѧ��������ÿ���˵ĳɼ�������ƽ���ɼ���
//######ע�⣺�������ѧ������С�ڵ���0ʱ�����ƽ���ɼ�Ϊ0�֣�

//#include<stdio.h>
//	int main(void)
//	{  
//	  /*********Begin*********/
//	  int i,n;
//	  float average,t,sum=0;
//	  scanf("d%",&n);
//	  if(n<=0){
//		  average=0.00;
//	  }else{
//		  while(n-->0){
//			  scanf("%d",&t);
//			  sum+=t;
//		  }
//		  average=sum/n;
//	  }
//	  printf("the number of students:the scores:average=%.2f",average);
//	  
//	  /*********End**********/ 
//       return 0;
//	}

#include<stdio.h>
	int main(void)
	{
	  float n,sum=0,t,x;
	  scanf("%f",&n);
	  x=n;
	  while(n-->0){
		  scanf("%f",&t);
		  sum+=t;
	  }
	  if(x<0)x=1;
	  printf("the number of students:the scores:average=%.2f",sum/x);
      return 0;
	}

