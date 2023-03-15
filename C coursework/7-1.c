#include<stdio.h>
double min(double x, double y);
int main(void)
{
	double x, y;
	printf("Enter two doubles (q to quit): ");
	while ((scanf("%lf %lf", &x, &y)) != 0) {
		printf("min( %.2f , %.2f ) = %.2f\n", x, y, min(x, y));
		printf("Enter two doubles (q to quit): ");
	}
	return 0;
}
double min(double x, double y) {
	if (x > y) return y;
	else return x;
}
/*
Enter two doubles (q to quit): 3.4 2.3
min( 3.40 , 2.30 ) = 2.30
Enter two doubles (q to quit): 1.2 -1.8
min( 1.20 , -1.80 ) = -1.80
Enter two doubles (q to quit): q

*/