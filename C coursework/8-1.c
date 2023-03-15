#include<stdio.h>
void swap(double* a, double* b);
void sort(double arr[], int n);
void show_array(double arr[], int n);
int main(void)
{
	double arr[7] = { 1.1, 2.2, 7.7, 4.4, 5.5, 3.3, 6.6 };
	printf("Before sorting:");
	show_array(arr, 7);
	sort(arr, 7);
	printf("\nAfter  sorting:");
	show_array(arr, 7);
	return 0;
}
void swap(double* a, double* b) {
	double c;
	c = *a; *a = *b; *b = c;
}
void sort(double arr[], int n) {
	do {
		for (n = 0; n <= 5; n++) {
			if (arr[n] > arr[n + 1])
				swap(&arr[n], &arr[n + 1]);
		}
	} while (arr[2] != 3.3);
}
void show_array(double arr[], int n) {
	for(n=0;n<=6;n++)
	printf("  %.2lf  ", arr[n]);
}
/*
Before sorting:  1.10    2.20    7.70    4.40    5.50    3.30    6.60
After  sorting:  1.10    2.20    3.30    4.40    5.50    6.60    7.70
*/