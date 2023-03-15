#include<stdio.h>
#include <math.h> 
#define N 4 
double dot_product(double * u, double * v, int n);
double norm(double * u, int n);

int main(void)
{
	double a[N] = { 1., 2., 3., 4. }; 
	double b[N] = { 1., 1., 1., 1. };
	printf(" (a, b) = %8.3f\n", dot_product(a, b, N));
	printf("norm(a) = %8.3f\n", norm(a, N));
	return 0;
}
double dot_product(double* u, double* v, int n) {
	double x=0;
	for (int i = 0; i < n; i++)
		x =x+ *(u + i) * *(v + i);
	return x;
}
double norm(double* u, int n) {
	double x = 0;
	for (int i = 0; i < n; i++)
		x = x + pow(*(u + i),2);
	return sqrt(x);
}
/*
 (a, b) =   10.000
norm(a) =    5.477

*/