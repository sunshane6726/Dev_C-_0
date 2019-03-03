/* Q5 2�� �˻� (���� ���ʿ� �ִ� ��Ҹ� �˻�) */
#include <stdio.h>
#include <stdlib.h>

/*--- ��ڼ� n�� �迭 a���� key�� ��ġ�ϴ� ��Ҹ� 2�� �˻� (���� ���ʿ� �ִ� ��Ҹ� �˻�) ---*/
int bin_search2(const int a[], int n, int key)
{
	int pl = 0;			/* �˻� ������ ù �ε��� */
	int pr = n - 1;		/*     ����      �� �ε��� */
	int pc;				/*     ����      ��� �ε��� */

	do {
		pc = (pl + pr) / 2;
		if (a[pc] == key) {		/* �˻� ���� */
			while (pc > pl && a[pc - 1] == key)
				pc--;
			return pc;
		}
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

	puts("���� �˻�");
	printf("��ڼ� : ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));	

	printf("������������ �Է��ϼ���.\n");
	printf("x[0] : ");
	scanf("%d", &x[0]);

	for (i = 1; i < nx; i++) {
		do {
			printf("x[%d] : ", i); 
			scanf("%d", &x[i]); 
		} while (x[i] < x[i - 1]);	/* �ٷ� ���� ������ ������ �ٽ� �Է� */
	}
	printf("�˻� ��: ");
	scanf("%d", &ky);

	idx = bin_search2(x, nx, ky);	/* �迭 x���� ���� ky�� ��Ҹ� 2�� �˻� */
	
	if (idx == -1)
		puts("�˻��� �����߽��ϴ�.");
	else
		printf("%d�� x[%d]�� �ֽ��ϴ�.\n", ky, idx);

	free(x);

	return 0;
} 

