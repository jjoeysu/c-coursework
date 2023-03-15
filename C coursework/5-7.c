#include<stdio.h>
#include<math.h>
int main(void)
{
	double a, b, c, d;
	printf("This program finds the roots of a \
quadric equation (ax^2 + bx + c = 0) \n");
	printf("Enter a, b, c (q to quit): ");
	while (scanf("%lf %lf %lf", &a, &b, &c) != 0) {
		d = b * b - 4 * a * c;
		if (fabs(a) < 1e-14 && fabs(b) < 1e-14 && c != 0)
			printf("Degenerate into linear equation.\nNo solution.\n");
		else if (fabs(a) < 1e-14 && b != 0)
			printf("Degenerate into linear equation.\
\nsingle root: x= %.3f\n", -c / b);
		else if (a != 0 && fabs(d) < 1e-14)
			printf("double root: x= %.3f\n", -b / (2 * a));
		else if (a != 0 && d > 0)
			printf("real roots: x1= %.3f ,x2= %.3f\n", \
				(-b + sqrt(d)) / (2 * a), (-b - sqrt(d)) / (2 * a));
		else if (a != 0 && d < 0)
			printf("complex roots: x1= %.3f + %.3fi ,\
x2= %.3f - %.3fi\n", -b / (2 * a), sqrt(-d) / (2 * a), \
- b / (2 * a), sqrt(-d) / (2 * a));
		else printf("error.");
		printf("Enter a, b, c (q to quit): ");
	}
	return 0;
}
/*
This program finds the roots of a quadric equation (ax^2 + bx + c = 0)
Enter a, b, c (q to quit): 0 0 1
Degenerate into linear equation.
No solution.
Enter a, b, c (q to quit): 0 1 2
Degenerate into linear equation.
single root: x= -2.000
Enter a, b, c (q to quit): 1 -2 1
double root: x= 1.000
Enter a, b, c (q to quit): 1 -3 2
real roots: x1= 2.000 ,x2= 1.000
Enter a, b, c (q to quit): 1 2 4
complex roots: x1= -1.000 + 1.732i ,x2= -1.000 - 1.732i
Enter a, b, c (q to quit): q

*/