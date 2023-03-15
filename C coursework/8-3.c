#include<stdio.h>
void max(double* arr, int n, double* max_val, int* max_idx);
int main(void)
{
	double array[4] = { 2.0,-1.0,5.0,5.0 }; 
	double max_val; int max_idx;
	max(array, 4, &max_val, &max_idx);
	printf("the maximum value of array is %.2f " 
		"which is located at %d-th element.", max_val, max_idx + 1);
	return 0;
}
void max(double* arr, int n, double* max_val, int* max_idx) {
	*max_val = *arr;
	for (int i = 0; i < n; i++) {
		if (*max_val < *(arr + i)) {
			*max_val = *(arr + i);
			*max_idx = i;
		}
	}
}
/*
the maximum value of array is 5.00 which is located at 3-th element.
*/