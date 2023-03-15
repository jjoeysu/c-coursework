#include<stdio.h>
int main(void)
{
	int i,a, b, c, d, e;
	printf("Enter 5 integers:\n");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	int s[] = { a,b,c,d,e };
	for (i = 4; i >= 0;)
	{
		printf("%d ", s[i]);
		i--;
	}
	return 0;
}
/*
Enter 5 integers:
1 2 3 4 5
5 4 3 2 1
*/