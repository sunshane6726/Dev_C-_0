///* Q12 ������ ǥ�� ����մϴ�. */
#include <stdio.h>

int main(void)
{
	int i, j;

	printf("   |");
	for (i = 1; i <= 9; i++)
		printf("%3d", i); //"%3d" �� ���ϴ� ���� �������� �˰� �ֳ� ? 
		 // ��ĭ�� �پ ���ڸ� �����شٶ�� ���� �ǹ��Ѵ�. 

	printf("\n - + --------------------------- \n");

	for (i = 1; i <= 9; i++) {
		printf("%2d |", i);
		for (j = 1; j <= 9; j++)
			printf("%3d", i * j);
		putchar('\n');
	}

	return 0;
}
