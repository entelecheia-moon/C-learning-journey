#include<stdio.h>
int main()
{
	printf("请输入你的体重(kg),身高(米)：");
	float weight;
	float height;
	scanf("%f%f",&weight,&height);
	float BMI=0;
	BMI=weight/(height*height);
    printf("你的BMI是%f。\n",BMI);
	if(BMI>23.9){printf("啊哦，你需要控制体重了哦。\n"); 
	}else{if(BMI<17.2){printf("可恶，你瘦的有点过分了，保持健康的身材才是最重要的哦。\n");
	}else{printf("very good,你的身材很标准。\n");
	}
	}
	return 0;
}
