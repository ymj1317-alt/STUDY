#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	

int main(void)
{
	int num1, num2;
	char sign;


	printf("사칙연산 입력(정수) : ");
	scanf("%d%c%d", &num1, &sign, &num2);

	if (sign == '+')
	{
		printf("%d+%c=%d\n", num1, num2,num1+num2);
	}
	else if (sign == '-')
	{
		printf("%d-%d=%d\n", num1,num2, num1-num2);
	}
	else if(sign=='*')
	{
		printf("%d*%d=%d\n", num1, num2, num1 * num2);
	}
	else
	{
		printf("%d/%d=%d\n", num1, num2, num1 / num2);
	}


	return 0;

}