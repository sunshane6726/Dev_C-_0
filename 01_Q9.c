/* Q9 ���� a, b�� ������ �� ������ ��� ������ ���� ���մϴ�. */
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
	int sum; /* �� */

	printf("c �� : "); scanf("%d", &c);
	printf("d �� : "); scanf("%d", &d);

	printf("���� a, b ������ ��� ������ ���� %d�Դϴ�.\n", sumof(c, d));

	return 0;
}
