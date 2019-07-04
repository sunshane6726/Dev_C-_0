/* Q4 2�� �˻� (�˻� ���� ���) */
#include <stdio.h>
#include <stdlib.h>

/*--- ��Ҽ� n�� �迭 a���� key�� ��ġ�ϴ� ��Ҹ� 2�� �˻� ---*/
int bin_search(const int a[], int n, int key)
{
	int i;
	int pl = 0;			/* �˻� ������ ù �ε��� */
	int pr = n - 1;		/*     ����      �� �ε��� */
	int pc;				/*     ����      ��� �ε��� */

	printf("   |");
	for (i = 0; i < n; i++) printf("%4d", i);
	printf("\n---+");
	for (i = 0; i < n; i++) printf("----", i);
	printf("--\n");

	do {
		pc = (pl + pr) / 2;

	printf("   |");
		for (i = 0; i < 4 * pl; i++) printf(" ");
			printf(" <-");
			for (i = 0; i < 4 * (pc - pl); i++) printf(" ");
					printf("+");
				for (i = 0; i < 4 * (pr - pc) - 2; i++) printf(" ");
			printf("->\n");

		printf("%3d|", pc);
		for (i = 0; i < n; i++)
			printf("%4d", a[i]);
		putchar('\n');

   		if (a[pc] == key)		/* �˻� ���� */
			return pc;
		else if (a[pc] < key)
			pl = pc + 1;
		else
			pr = pc - 1;
	} while (pl <= pr);

	return -1;					/* �˻� ���� */
}

int main(void)
{
	int i, nx, ky, idx;
	int *x;		/* �迭�� ù ��° ��ҿ� ���� ������ */

	puts("2�� �˻�");
	printf("��Ҽ� : ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));	/* ��Ҽ� nx�� int �� �迭�� ���� */

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

	idx = bin_search(x, nx, ky);	/* �迭 x���� ���� ky �� ��Ҹ� 2�� �˻� */

	if (idx == -1)
		puts("�˻��� �����߽��ϴ�.");
	else
				printf("%d�� x[%d]�� �ֽ��ϴ�.\n", ky, idx);

	free(x);	/* �迭�� ���� */

	return 0;
}
