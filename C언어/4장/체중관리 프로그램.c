#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	

int main(void)
{
	int weight;
	double height;
	double bmi;

	printf("몸무게(kg)와 키(cm) 입력 : ");
	scanf("%d%lf", &weight, &height);

	bmi = weight / (height * height);

	printf("%s",((bmi >= 20.0) && (bmi < 25.0))
			? "표준입니다."
			: "체중관리가 필요합니다.");

		return 0;
}
