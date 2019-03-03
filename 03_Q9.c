/* Q9 bsearch �Լ��� Ȯ���� �Լ� (���� ���ʿ� �ִ� ��Ҹ� �˻�)*/
#include <stdio.h>
#include <stdlib.h>

/*
	base�� ����Ű�� ����� ũ�Ⱑ size�̰� ��Ҽ��� nmemb�� �迭���� 
	key�� ��ġ�ϴ� ��Ҹ� �� �Լ� compar�� ����Ͽ� 2�� �˻�
	**key�� ���� ��Ұ� ���� ���ִ� ���� ���� ������ ��Ҹ� ã���ϴ�. 
*/
void *bsearchx(const void *key, const void *base, size_t nmemb, size_t size,
	int(*compar)(const void *, const void *))
{
	size_t pl = 0;						/* �˻� ������ ù �ε��� */
	size_t pr = nmemb - 1;				/* �˻� ������ �� �ε��� */
	size_t pc;							/* �˻� ������ ��� �ε��� */
	char   *x = (char *)base;

	if (nmemb > 0) {
		while (1) {
			int comp = compar((const void *)&x[(pc = (pl + pr) / 2) * size], key);

			if (comp == 0) { 				/* �˻� ���� */
				for (; pc > pl; pc--)		/* key�� ���� ��Ҹ� ã���ϴ�. */
					if (compar((const void *)&x[(pc - 1) * size], key))
						break;
				return &x[pc * size];
			}
			else if (pl == pr)
				break;
			else if (comp < 0)
				pl = pc + 1;				/* �˻� ������ �Ĺݺη� ������ */
			else
				pr = pc - 1;				/* �˻� ������ ���ݺη� ������ */
		}
	}

	return NULL;							
}

/*--- ������ ���ϴ� �Լ� ---*/
int int_cmp(const int *a, const int *b)
{
	if (*a < *b)
		return -1;
	else if (*a > *b)
		return 1;
	else
		return 0;
}

int main(void)
{
	int i, nx, ky;
	int *x;		/* �迭�� ù ��° ��ҿ� ���� ������ */
	int *p;		/* �˻��� ��ҿ� ���� ������ */

	puts("bsearchx �Լ��� ����Ͽ� �˻�");
	printf("��ڼ� : ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));	/* ��Ҽ� nx�� int�� �迭�� ���� */

	printf("������������ �Է��ϼ���.\n");
	printf("x[0] : ");
	scanf("%d", &x[0]);

	for (i = 1; i < nx; i++) {
		do {
			printf("x[%d] : ", i);
			scanf("%d", &x[i]);
		} while (x[i] < x[i - 1]);	/* �ϳ� ���� ������ ������ �ٽ� �Է� */
	}

	printf("�˻� �� : ");
	scanf("%d", &ky);

	p = bsearchx(&ky,								/* �˻� ���� ���� ������ */
		x,											/* �迭 */
		nx,											/* ��ڼ� */
		sizeof(int),								/* ����� ũ�� */
		(int(*)(const void *, const void *))int_cmp	/* �� �Լ� */
	);

	if (p == NULL)
		puts("�˻��� �����߽��ϴ�.");
	else
		printf("%d�� x[%d]�� �ֽ��ϴ�.\n", ky, (int)(p - x));

	free(x);	

	return 0;
}

