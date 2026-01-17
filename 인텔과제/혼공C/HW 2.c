#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  

int main(void)
{
    double weight=0;
    double height_cm=0;
    double height_m;
    double bmi=0;
   
    printf("체중(kg)과 키(cm)를 입력하세요 : ");
    scanf("%lf %lf", &weight, &height_cm);

    height_m = height_cm / 100;
    bmi = weight / (height_m * height_m);

    if ((bmi >= 20.0) && (bmi < 25.0))
        printf("표준입니다.\n");
    else
        printf("체중관리가 필요합니다. BMI : %.1lf\n", bmi);

    return 0;
}