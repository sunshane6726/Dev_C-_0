///*
//	Q6 while������ 1, 2, ..., n�� ���� ���մϴ�.
//*/
#include <stdio.h>
//
int main(void)
{
	int i, n;
	int sum;			/* �� */

	puts("1���� n������ ���� ���մϴ�.");

	printf("n�� �� : ");
	scanf("%d", &n);

	sum = 0;
	i = 1;

	while (i <= n) {	/* i�� n ���ϸ� �ݺ��մϴ�. */
		sum += i;		/* sum�� i�� ���մϴ�. */
		i++;			/* i ���� 1��ŭ ������ŵ�ϴ�. */
	}
	
	printf("1���� %d������ ���� %d�Դϴ�.\n", n, sum);
	printf("���� i�� ���� %d�̰� n + 1�� %s.\n", i, (i == n + 1) ? "�����ϴ�." : "���� �ʽ��ϴ�.");

	return 0;
}