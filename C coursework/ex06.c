#include<stdio.h>
int main(void)
{
	int a, b, c,d;
	double e;
	printf("Enter an integer: ");
	scanf_s("%d",&a);
	printf("Enter field width: ");
	scanf_s("%d",&b);
	printf("*%*d*\n",b, a);
	printf("Enter a double number:");
	scanf_s("%lf", &e);
	printf("Enter field width and precision: ");
	scanf_s("%d", &c);
	printf(" and ");
	scanf_s("%d",&d);
	printf("*%*.*f*\n",c,d,e);
	return 0;
}