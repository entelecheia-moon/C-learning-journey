#include<stdio.h>
int main()
{
	printf("�������������(kg),���(��)��");
	float weight;
	float height;
	scanf("%f%f",&weight,&height);
	float BMI=0;
	BMI=weight/(height*height);
    printf("���BMI��%f��\n",BMI);
	if(BMI>23.9){printf("��Ŷ������Ҫ����������Ŷ��\n"); 
	}else{if(BMI<17.2){printf("�ɶ����ݵ��е�����ˣ����ֽ�������Ĳ�������Ҫ��Ŷ��\n");
	}else{printf("very good,�����ĺܱ�׼��\n");
	}
	}
	return 0;
}
