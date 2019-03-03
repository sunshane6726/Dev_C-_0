/* Q7 for문으로 1, 2, ..., n의 합을 구합니다. */
#include <stdio.h>

int main(void)
{
	int i, n;
	int sum; /* 합 */

	puts("1부터 n까지의 합을 구합니다."); // printf 처럼 하는 기능이지만 %d 같은 매개변수를 넣을수가 없다. 

	printf("n의 값 : ");
	scanf("%d", &n);

	sum = 0;

	for (i = 1; i <= n; i++) {	/* i = 1, 2, ..., n */
		sum += i;				/* sum에 i를 더합니다. */
	}

	for (i = 1; i < n; i++)
		printf("%d + ", i);
	printf("%d = %d\n", n, sum);

	return 0;


}
