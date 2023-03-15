#include<stdio.h>
void conversion(int number, int base);
int main(void)
{
	int number, base;
	printf("Enter a number and a base (q to quit): ");
	while (scanf("%d %d", &number, &base) != 0) {
		conversion(number, base);
		printf("\nEnter a number and a base (q to quit): ");
	}
	printf("Done.");
	return 0;
}
void conversion(int number, int base) {
	if (base == 2) {
		int a[100], i = 0;
		printf("(%d)_2 = ", number);
		for (i = 0; number != 0; i++) {
			a[i] = number % 2;
			number = number / 2;
		}
		for(i=i-1;i>=0;i--)
			printf("%d",a[i]);
	}
	if (base == 8)
		printf("(%d)_8 = %o", number, number);
	if (base == 16)
		printf("(%d)_16 = %x", number, number);
}
/*
Enter a number and a base (q to quit): 129 8
(129)_8 = 201
Enter a number and a base (q to quit): 27 16
(27)_16 = 1b
Enter a number and a base (q to quit): q
Done.
*/