#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num1 = 0, num2 = 0;
    char sign;

    printf("사칙연산 입력(정수) : ");
    scanf("%d%c%d", &num1, &sign, &num2);

    int result=0;

    if (sign == '+')
        result = num1 + num2;
    else if (sign == '-')
        result = num1 - num2;
    else if (sign == '*')
        result = num1 * num2;
    else if(sign == '/')
        result = num1 / num2;

    printf("%d %c %d = %d\n", num1, sign, num2, result);

    return 0;
}