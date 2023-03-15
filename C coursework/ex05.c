#include<stdio.h>
#include<float.h>
#define FLT_DIG 7
#define DBL_DIG 16
int main(void)
{
	float a = 1.0 / 3.0;
	double b = 1.0 / 3.0;
	printf("a=%.4f =%.12f=%.16f\n", a, a, a);
	printf("b=%.4f =%.12f=%.16f\n", b, b, b);
	printf("FLT_DIG:%d\n", FLT_DIG);
	printf("DBL_DIG:%d\n", DBL_DIG);
	return 0;
}