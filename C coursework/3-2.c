#include<stdio.h>
int main(void)
{
	int a, b, c;
	char x = '%';
	printf("This program computes modulus. \nEnter an integer to serve as the second operand:");
	scanf("%d", &b);
	printf("Now enter the first operand:");
	scanf("%d", &a);
	c = a % b;
	printf("%d %c %d = %d\n", a,x, b, c);
	printf("Enter next number for the first operand (<= 0 to quit): ");
	scanf("%d", &a);
	while (a > 0)
	{
		c = a % b;
		printf("%d %c %d = %d\n", a, x,b, c);
		printf("Enter next number for the first operand (<= 0 to quit): ");
		scanf("%d", &a);
	}
		int exit();
	return 0;
}
/*
This program computes modulus.
Enter an integer to serve as the second operand:5
Now enter the first operand:26
26 % 5 = 1
Enter next number for the first operand (<= 0 to quit): 36
36 % 5 = 1
Enter next number for the first operand (<= 0 to quit): 37
37 % 5 = 2
Enter next number for the first operand (<= 0 to quit): 38
38 % 5 = 3
Enter next number for the first operand (<= 0 to quit): 0
*/