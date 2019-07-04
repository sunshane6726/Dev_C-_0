///* ���� 3-3 �迭���� ������ ���� ��ġ�ϴ� ��� ����� �ε����� ���� */
#include <stdio.h>
#include <stdlib.h>

/*--- �迭 a���� ���� key�� ��� ����� �ε����� idx�� ���� ---*/
int search_idx(const int a[], int n, int key, int idx[])
{
	int i, count = 0;

	for (i = 0; i < n; i++)
		if (a[i] == key)
			idx[count++] = i;
	return count;
}

int main(void)
{
	int i, nx, ky;
	int no;		/* ky�� ��ġ�ϴ� ����� ���� */
	int *x;		/* �����͸� �����ϴ� �迭 */
	int *idx;	/* ky�� ��ġ�ϴ� ����� �ε����� �����ϴ� �迭 */

	puts("���� �˻�");
	printf("��ڼ� : ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));	/* ��ڼ� nx�� int �� �迭�� ���� */
	idx = calloc(nx, sizeof(int));	/* ��ڼ� nx�� int �� �迭�� ���� */

	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}
	printf("�˻� �� :");
	scanf("%d", &ky);

	no = search_idx(x, nx, ky, idx);	/* �迭 x���� ���� ky �� ��Ҹ� ���� �˻� */

	if (no == -1)
		puts("��ġ�ϴ� ��Ҵ� �������� �ʽ��ϴ�.");
	else {
		printf("��ġ�ϴ� ��Ҵ� %d ���Դϴ�.\n", no);
		for (i = 0; i < no; i++)
			printf("x[%d] ", idx[i]);
		putchar('\n');
	}

	free(x);	/* �迭�� ���� */
	free(idx);	/* �迭�� ���� */

	return 0;
}
