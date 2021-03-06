/* Q13 덧셈표를 출력합니다. */
#include <stdio.h>

int main(void)
{
	int i, j;

	printf("   |");
	for (i = 1; i <= 9; i++)
		printf("%3d", i);

	printf("\n - + --------------------------- \n");

	for (i = 1; i <= 9; i++) {
		printf("%2d |", i);
		for (j = 1; j <= 9; j++)
			printf("%3d", i + j); // 여기에서 + 를 바꾸었다는 것을 뜻한다. 
		putchar('\n');
	}

	return 0;
}
