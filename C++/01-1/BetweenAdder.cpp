#include <iostream>

int main(void)
{
	int val1, val2;
	int result = 0;

	std::cout<< "두 개의 숫자입력 : ";
	std::cin >> val1 >> val2;		//두개의 정수를 입력받아서 val1, val2에 순서대로 저장할것을 명령하는 문장

	if (val1 < val2)
	{
		for (int i = val1 + 1; i < val2; i++)		//for문 내에서 변수를 선언할수 있음
		{
			result += i;
		}
	}
	else
	{
		for (int i = val2 + 1; i < val2; i++)		//for문 내에서 변수를 선언할수 있음
		{
			result += i;
		}
	}

	std::cout << "두 수 사이의 정수 합 : " << result << std::endl;

	return 0;
}