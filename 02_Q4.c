/* 
	Q4 ë°°ì—´ ìš”ì†Œì˜ ìµœëŒ“ê°’ì„ êµ¬í•©ë‹ˆë‹¤. 
	ì¸ì›ìˆ˜ë¥¼ ë‚œìˆ˜ë¡œ ìƒì„±í•˜ì—¬ ìµœëŒ“ê°’ì„ êµ¬í•©ë‹ˆë‹¤.
*/
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/*--- . ---*/
int maxof(const int a[], int n)
{
	int i;
	int max = a[0]; /* ÃÖ´ñ°ª */

	for (i = 1; i < n; i++)
		if (a[i] > max) max = a[i];

	return max;
}

int main(void)
{
	int i;
	int *height;			/* */
	int number;				/* */

	srand(time(NULL));										/* */

	number = 5 + rand() % 16;								/* 5ÀÌ»ó 21¹Ì¸¸ ÀÇ¼ö¸¸ ³­±¸·Î Á¤ÇÏ´Â°Í */

	height = calloc(number, sizeof(int));					/*  */

	for (i = 0; i  <number; i++) {
		height[i] = 100 + rand() % 90;						/* 100 ~ 189 100ÀÌ»ó 189ÀÌÇÏÀÇ ³­¼ö¸¦ Á¤ÇÒ¶§ ¾²ÀÎ´Ù*/
		printf("height[%d] = %dì…ë‹ˆë‹¤.\n", i, height[i]);
	}

	printf("ìµœëŒ“ê°’ì€ %dì…ë‹ˆë‹¤.\n", maxof(height, number));

	free(height); /*  */

	return 0;
}
