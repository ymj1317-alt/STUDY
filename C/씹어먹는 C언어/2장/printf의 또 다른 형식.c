#include <stdio.h>	

int main(void)
{
	float a = 3.141592f;
	double b = 3.141595;
	int c = 123;

	printf("a : %.2f\n", a);
	printf("c : %5d\n", c);
	printf("b : %6.3lf\n", b);

	return 0;
}