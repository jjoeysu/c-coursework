#include<stdio.h>
void add(int* arr1, int* arr2, int* arr3, int n); 
void show_array(int arr1d[], int n);
int main(void)
{
	int arr1[4] = { 2,4,5,8 }; 
	int arr2[4] = { 1,0,4,6 };
	int arr3[4];
	add(arr1, arr2, arr3, 4);
	printf("arr1: ");show_array(arr1, 4);
	printf("\narr2: ");show_array(arr2, 4);
	printf("\narr3: ");show_array(arr3, 4);
	return 0;
}
void add(int* arr1, int* arr2, int* arr3, int n) {
	for (int i = 0; i < n; i++)
		*(arr3 + i) = *(arr1 + i) + *(arr2 + i);
}
void show_array(int arr1d[], int n) {
	for (int i = 0; i < n; i++)
		printf("%5d", arr1d[i]);
}
/*
arr1:     2    4    5    8
arr2:     1    0    4    6
arr3:     3    4    9   14
*/