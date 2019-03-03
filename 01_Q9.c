/* Q9 정수 a, b를 포함한 그 사이의 모든 정수의 합을 구합니다. */
#include <stdio.h>

int sumof(int a, int b)
{
	int i, min, max;
	int sum = 0;

	if (a < b) {
		min = a; 
		max = b;
	}
	else {
		min = b; 
		max = a;
	}

	for (i = min; i <= max; i++)
		sum += i;
	
	return sum;
}

int main(void)
{
	int c, d;
	int sum; /* 합 */

	printf("c 값 : "); scanf("%d", &c);
	printf("d 값 : "); scanf("%d", &d);

	printf("정수 a, b 사이의 모든 정수의 합은 %d입니다.\n", sumof(c, d));

	return 0;
}
