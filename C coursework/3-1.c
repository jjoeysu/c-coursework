#include<stdio.h>
int main(void)
{
	int a, b, c;
	printf("Please enter the number of days:");
	scanf("%d", &a);
	b = a / 7, c = a % 7;
	if ((b<2)&(c<2))
		printf("%d days are %d week,%d day.", a, b, c);
	else if ((b < 2) & (c > 1))
	printf("%d days are %d week,%d days.",a,b,c);
	else if ((b > 1) & (c < 2))
		printf("%d days are %d weeks,%d day.", a, b, c);
	else
	printf("%d days are %d weeks,%d days.", a, b, c);
	return 0;
}
/*
Please enter the number of days:18
18 days are 2 weeks,4 days.
*/