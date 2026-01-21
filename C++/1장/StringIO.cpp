#include <iostream>

int main(void)
{
	char name[100];
	char lang[200];

	std::cout << "이름이 무엇입니까? ";
	std::cin >> name;		//배열에 문자열의 저장을 명령

	std::cout << "좋아하는 프로그래밍 언어는 무엇인가요? ";
	std::cin >> lang;		//배열에 문자열의 저장을 명령

	std::cout << "내 이름은 " << name << "입니다.\n";		//\n과 같은 특수문자는 C언어에서와 같은 의미, 다만 std::endl;로 개행의 역할을 대신할뿐
	std::cout << "제일 좋아하는 언어는 " << lang << "입니다." << std::endl;

	return 0;
}