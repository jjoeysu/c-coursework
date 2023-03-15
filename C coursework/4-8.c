#include<stdio.h>
float a, b, c;
int main(void)
{
	printf("Enter two float number(q to quit):");
	while (scanf("%f %f", &a, &b) > 0)
	{
		float difference_by_product(float a, float b);
		c = difference_by_product(a, b);
		printf("%f\n", c);
		printf("Enter two float number(q to quit):");
	}
	return 0;
}
float difference_by_product(float a, float b)
{
	c = (a - b) / (a * b);
	return c;
}
/*
Enter two float number(q to quit):2.2 3.3
-0.151515
Enter two float number(q to quit):2.5 6.5
-0.246154
Enter two float number(q to quit):5.5 3.6
0.095960
Enter two float number(q to quit):q

*/