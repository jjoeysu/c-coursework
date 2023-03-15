#include<stdio.h>
int main(void)
{
	int i, j, k,l,m,n;
	for (i = 1; i <= 5; i++)
	{
		k = 64;
		for (j = 1; j <= 5-i; j++)
			printf(" ");
		for (l = 1; l <= i; l++)
			printf("%c",k, k++);
		n = k;
		for (m = 0; m <= i-2; m++)
		printf("%c", n, n--);
		printf("\n");
	}
	return 0;
}
/*
	A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA

*/