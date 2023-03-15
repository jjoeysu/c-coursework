#include<stdio.h>
int main(void)
{
	float a, b, c, d;
	printf("Enter two float numbers(q to quit):");
	scanf("%f %f", &a, &b);
	c = a - b, d = a * b;
	printf("%.3f     %.3f\n", c, d);
	printf("Enter next pairs(q to quit):");
	while (scanf("%f %f", &a, &b) > 0)
	{
		c = a - b, d = a * b;
		printf("%.3f     %.3f\n", c, d);
		printf("Enter next pairs(q to quit):");
	}
		return 0;
}
/*
Enter two float numbers(q to quit):2.2 2.3
-0.100     5.060
Enter next pairs(q to quit):3.2 2.1
1.100     6.720
Enter next pairs(q to quit):3.3 3.3
0.000     10.890
Enter next pairs(q to quit):1.1 1.1
0.000     1.210
Enter next pairs(q to quit):2.2 2.2
0.000     4.840
Enter next pairs(q to quit):5.5 5.5
0.000     30.250
Enter next pairs(q to quit):q

*/