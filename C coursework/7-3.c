#include<stdio.h>
void order(float* a, float* b, float* c);
int main(void)
{
	float a, b, c;
	printf("Enter 3 floats (q to quit): ");
	while (scanf("%f %f %f", &a, &b, &c) != 0) {
		printf("Before order: a = %.2f, \
b = %.2f, c = %.2f \n", a, b, c);
		order(&a,&b,&c);
		printf("After  order: a = %.2f, \
b = %.2f, c = %.2f \n", a, b, c);
		printf("Enter 3 floats (q to quit): ");
	}
	return 0;
}
void order(float* a, float* b, float* c) {
	float x;
	if (*b < *a && *b < *c) {
		x = *a;
		*a = *b;
		*b = x;
	}
	if (*c < *a && *c < *b) {
		x = *a;
		*a = *c;
		*c = x;
	}
	if (*b > *c) {
		x = *c;
		*c = *b;
		*b = x;
	}
}
/*
Enter 3 floats (q to quit): 1.2 3.4 -1.1
Before order: a = 1.20, b = 3.40, c = -1.10
After  order: a = -1.10, b = 1.20, c = 3.40
Enter 3 floats (q to quit): 12 31 24
Before order: a = 12.00, b = 31.00, c = 24.00
After  order: a = 12.00, b = 24.00, c = 31.00
Enter 3 floats (q to quit): q

*/