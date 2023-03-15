#include<stdio.h>
int main(void)
{
	int i;
	double a, b, c, d;
	printf("Enter 4 doubles:");
	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
	double x[4] = { a,b,c,d }, y[4];
	y[0] = a;
	for (i = 1; i <= 3;)
	{
		y[i] = y[i - 1] + x[i];
		i++;
	}
	i = 0;
	while(i<=0)
	{
		printf("%8.2f%8.2f%8.2f%8.2f\n", x[i],x[i+1],x[i+2],x[i+3]);
		printf("%8.2f%8.2f%8.2f%8.2f", y[i], y[i + 1], y[i + 2], y[i + 3]);
		i++;
	}
	return 0;
}
/*
Enter 4 doubles:1 2 3 4
	1.00    2.00    3.00    4.00
	1.00    3.00    6.00   10.00
*/