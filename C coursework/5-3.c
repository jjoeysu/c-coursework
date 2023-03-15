#include<stdio.h>
int main(void)
{
	int odd = 0, even = 0, num; 
	float sum_odd = 0, sum_even = 0;
	float average_o, average_e;
	printf("Enter some integers (0 to quit) : \n");
	while (scanf("%d", &num) == 1) {
		if (num == 0)
			break;
		if (num % 2 == 0) {
			even++;
			sum_even += num;
		}
		else {
			odd++;
			sum_odd += num;
		}
	}
		average_e = sum_even / even;
		average_o = sum_odd / odd;
		printf("number of even integer is %d, and average\
 is %.3f\nnumber of odd integer is %d, and\
 average is %.3f", even, average_e, odd, average_o);
	return 0;
}
/*
Enter some integers (0 to quit) :
24 35 36 45 44 12 32 11
0
number of even integer is 5, and average is 29.600
number of odd integer is 3, and average is 30.333
*/