//�������񣺼�������������a��n����� s=a+aa+aaa+aaaa+aa...a��n��a����ֵ��
//���磺
//a=2 ��n=5ʱ,��ʾ������2��ɵ����ĺͣ�2+22+222+2222+22222  ( ��ʱ ����5�������)��
//���룺5    3   ��ʾ3����5��ɵ�����ӣ�������5+55+555��ֵ�������615
//���룺5    4   ��ʾ����5+55+555+5555��ֵ�������6170
#include<stdio.h>
	int main(void)
	{  
	  /*********Begin*********/
	  int a,n,i,sum=0,a1;
	  i=0;
	  a1=a;
	  scanf("%d %d",&a,&n);
	  while(i<n){
	  	  i++;
		  sum=sum+a;
		  a=(10*a)+a1; 
		  
	  }
	  printf("%d",sum);
	  /*********End**********/ 
       return 0;
	}




//#include<stdio.h>
//	int main(void)
//	{  
//	  int i,a,b,sum=0,a1;
//	  scanf("%d %d",&a,&b);
//	  a1=a;
//	  for(i=0;i<b;i++){
//		  sum+=a;
//		  a=a*10+a1;
//	  }
//	  printf("%d",sum);
//      return 0;
//	}
