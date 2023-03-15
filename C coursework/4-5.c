#include<stdio.h>
int main(void)
{
	int i,a, b, c, d;
	printf("Please input the begin and end numbers: ");
	scanf("%d %d", &a, &b);
	for (i = a; i <= b; i++)
	{
		c = a * a, d = a * a * a;
		printf("%9d   %9d   %9d", a, c, d);
		printf("\n");
		a++;
	}
	return 0;
}
/*
Please input the begin and end numbers: 2 8
		2           4           8
		3           9          27
		4          16          64
		5          25         125
		6          36         216
		7          49         343
		8          64         512

*/