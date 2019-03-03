///* Q12 구구단 표를 출력합니다. */
#include <stdio.h>

int main(void)
{
	int i, j;

	printf("   |");
	for (i = 1; i <= 9; i++)
		printf("%3d", i); //"%3d" 가 뜻하는 것이 무엇인지 알고 있나 ? 
		 // 세칸씩 뛰어서 문자를 보내준다라는 것을 의미한다. 

	printf("\n - + --------------------------- \n");

	for (i = 1; i <= 9; i++) {
		printf("%2d |", i);
		for (j = 1; j <= 9; j++)
			printf("%3d", i * j);
		putchar('\n');
	}

	return 0;
}
