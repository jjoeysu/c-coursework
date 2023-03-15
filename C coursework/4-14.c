#include<stdio.h>
int main(void)
{
	int s=10000,n ,i;
	float a = 0.1, b = 0.05,m;
	n=s,m=s,i = 0;
	do
	{
		i++;
		n = n + s * a , m = m * (1.0 + b);
	} while (n >= m);
	printf("After %d years, invest of Li (%.0f) exceed that of Wang (%d).",i, m, n);
	return 0;
}/*
 After 27 years, invest of Li (37335) exceed that of Wang (37000).
 */