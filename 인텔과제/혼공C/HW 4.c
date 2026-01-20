#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	

int main(void)
{
	int num = 0;
	int i, j;
	int prime = 1;		// OK: 소수 판정용 변수
	int count = 0;        


	printf("2 이상의 정수를 입력하세요 : ");
	scanf("%d", &num);

	for (i = 2; i <= num; i++)
	{
		prime = 1;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				prime = 0;   
				break;      
			}
		
		}
		if (prime == 1)
		{
			count++;
			printf("%5d", i);
			if (count % 5 == 0)
			{
				printf("\n");  
			}
		}
	}

	return 0;
}
