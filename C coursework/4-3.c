#include<stdio.h>
int main(void)
{
	int i, j, k;
	for (i = 1; i <= 6; i++)
	{
		k = 71;
		for (j = 1; j <= i; j++)
			printf("%c", k, k--);
		printf("\n");
	}
	return 0;
}
/*
F
FE
FED
FEDC
FEDCB
FEDCBA

*/