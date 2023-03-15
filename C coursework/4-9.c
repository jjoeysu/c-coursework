#include<stdio.h>
int main(void)
{
	int i,a, b, sum_of_squares;
	printf("Calculate the sum of squares of consecutive integers\n\
(Enter the same two integers to end)\n");
	printf("Enter lower and upper integer limit:");
	scanf("%d %d", &a, &b);
	i = a;
	while (a < b)
	{
		sum_of_squares = 0;
		for (i = a; i <= b;)
		{
			sum_of_squares = i * i + sum_of_squares;
			i++;
		}
		printf("The sum of the squares from\
 %d to %d is %d \n", a, b, sum_of_squares);
		printf("Enter lower and upper integer limit:");
		scanf("%d %d", &a, &b);
	}
	return 0;
}
/*
Calculate the sum of squares of consecutive integers
(Enter the same two integers to end)
Enter lower and upper integer limit:2 5
The sum of the squares from 2 to 5 is 54
Enter lower and upper integer limit:1 2
The sum of the squares from 1 to 2 is 5
Enter lower and upper integer limit:1 8
The sum of the squares from 1 to 8 is 204
Enter lower and upper integer limit:2 2

*/