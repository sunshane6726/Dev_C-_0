/* Q8 가우스의 덧셈식으로 1, 2, ..., n의 합을 구합니다. */
#include <stdio.h>

int main(void)
{
	int i, n;
	int sum;			/* 합 */

	puts("1부터 n까지의 합을 구합니다.");

	printf("n의 값 :");
	scanf("%d", &n);

	sum = (n + 1) * (n / 2) + (n % 2 == 1 ? (n + 1) / 2 : 0); // 삼항연산자 (조건) ? (true) : (false)시 
																// 변수를 깔끔하게 적고 싶을때 사용 //
	printf("1부터 %d까지 합은 %d입니다.\n", n, sum);

	return 0;
}
