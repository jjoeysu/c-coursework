#include<stdio.h>
#define SIZE 5 
void copy_arr(double source[], double target[], int n);
void copy_ptr(double * source, double * target, int n);
void show_array(double arr[], int n);
int main(void)
{
	double source[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 }; 
	double target1[5], target2[5];
	copy_arr(source, target1, SIZE);
	copy_ptr(source, target2, SIZE); 
	printf("source : "); show_array(source, SIZE); 
	printf("\ntarget1: "); show_array(target1, SIZE);
	printf("\ntarget2: "); show_array(target2, SIZE);
	return 0;
}
void copy_arr(double source[], double target[], int n) {
	int i;
	for (i = 0; i < n; i++)
		target[i] = source[i];
}
void copy_ptr(double* source, double* target, int n) {
	int i=0;
	while (i++ < n)
		*(target++) = *(source++);
}
void show_array(double arr[], int n) {
	int i;
	for (i = 0; i < n; i++)
		printf("  %.2lf  ", arr[i]);
}
/*
source :   1.10    2.20    3.30    4.40    5.50
target1:   1.10    2.20    3.30    4.40    5.50
target2:   1.10    2.20    3.30    4.40    5.50
*/