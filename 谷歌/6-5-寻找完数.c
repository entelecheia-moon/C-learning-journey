//��������һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ"����"��
// ���磬6������Ϊ1��2��3����6=1+2+3�����6��"����"�� 
// ������ҳ�1000֮�ڵ�����������
//#include<stdio.h>
//	int main(void)
//	{  
//	int n;
//	scanf("%d",n);
//	int i,j,s=0;
//	  /*********Begin*********/
//	  for(i=1;i<=n;i++){
//	  	int x=0;
//		  for(j=1;j<i;j++) {
//			  if(i%j==0){
//			  	  x=1;
//				  s+=j;
//			  }
//		  }
//		  if(s==i&&x==1){
//			  printf("%d\n",i);
//		  }
//	  }
//	  
//	  /*********End**********/ 
//       return 0;
//	}

#include<stdio.h>
	int main(void)
	{  
	  int i,n;
	  scanf("%d",&n);
	  for(i=1;i<=n;i++){
		  int sum=0;
		  int t=1;
		  int x=0;
		  while(t<i){
			  if(i%t==0){
				  x=1;
				  sum+=t;
			  }
			  t++;
		  }
		  if(sum==i&&x==1){
			  printf("%d\n",i);
		  }
	  }
       return 0;
	}




