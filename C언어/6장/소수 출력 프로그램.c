#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>	

int main(void)
{
	int num;
	int pn;		//pn이 1이면 소수(p%i가 0이아니고 p와 i가 같지 않음)
	int i,j;
	int cnt = 0;

	printf("2이상의 정수를 입력하세요 : ");
	scanf("%d", &num);

	for (i = 2; i <= num; i++)
	{
		pn = 1;
		for (j = 2; j < i; j++)
		{
			if ((i % j) == 0)
			{
				pn = 0;
				break;
			}
		}
		if (pn == 1)
		{
			printf("%5d", i);
			cnt++;
			if ((cnt % 5) == 0)
			{
				printf("\n");
			}
		}
	}

	return 0;
}