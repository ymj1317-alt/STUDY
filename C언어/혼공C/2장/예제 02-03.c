#include <stdio.h>	

int main(void)
{
	printf("Be happy\n");					//Be happy를 출력하고 줄 바꿈(\n)
	printf("12345678901234567890\n");		//화면에 열번호를 출력하고 줄바꿈(\n)
	printf("My\tfriend\n");					//My를 출력하고 탭위치로 이동(\t)후에 friend를 출력하고 줄바꿈(\n)
	printf("Goot\bd\tchance\n");			//Goot를 출력하고 한 칸 왼쪽으로 이동(\b)해 t를 d로 바꾸고 탭위치로 이동(\t)후에 chance를 출력하고 줄바꿈(\n)
	printf("Cow\rW\a\n");					//맨 앞으로 이동(\r)해 C를 W로 바꾸고 벨소리(\a)를 내고 줄바꿈(\n)

	return 0;
}