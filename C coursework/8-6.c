#include<stdio.h>
#define COLS 5 
#define ROWS 3 
void input_array2d(double arr2d[][COLS], int row);
void show_array1d(double arr1d[], int n);
void show_array2d(double arr2d[][COLS], int row); 
double aver_array1d(double * arr1d, int n); 
void aver_array2d_row(double arr2d[][COLS], int row, double aver[]); 
double aver_array2d(double arr2d[][COLS], int row);
double max_array2d(double arr2d[][COLS], int row);
int main(void)
{
	double arr2d[ROWS][COLS]; 
	double aver_row[ROWS]; 
	double aver; double max;
	printf("Please input 3 sets of five double numbers each.\n"); 
	input_array2d(arr2d, ROWS);
	printf("The array is:\n");
	show_array2d(arr2d, ROWS);
	aver_array2d_row(arr2d, ROWS, aver_row);
	printf("aver of each row:\n");
	show_array1d(aver_row, ROWS);
	aver = aver_array2d(arr2d, ROWS); 
	printf("\naver of arr2d is %5.2f\n", aver);
	max = max_array2d(arr2d, ROWS);
	printf("max of arr2d is %5.2f\n", max);
	return 0;
}
void input_array2d(double arr2d[][COLS], int row) 
{
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < COLS; j++)
			scanf("%lf", &arr2d[i][j]);
	}
}
void show_array1d(double arr1d[], int n) 
{
	for (int i = 0; i < n; i++)
		printf("%8.2f", arr1d[i]);
}
void show_array2d(double arr2d[][COLS], int row) 
{
	for (int i = 0; i < row; i++) {
		show_array1d(arr2d[i], COLS);
		printf("\n");
	}
}
double aver_array1d(double* arr1d, int n) 
{
	double x=0;
	for (int i = 0; i < n; i++)
		x = x + *(arr1d ++);
	return x / n;
}
void aver_array2d_row(double arr2d[][COLS], int row, double aver[])
{
	for (int i = 0; i < row; i++)
		aver[i] = aver_array1d(arr2d[i], COLS);
}
double aver_array2d(double arr2d[][COLS], int row)
{
	double x = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < COLS; j++)
				x =x+ arr2d[i][j];
	}
	return x/(row*COLS);
}
double max_array2d(double arr2d[][COLS], int row)
{
	double x = arr2d[0][0];
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < COLS; j++) {
			if (x < arr2d[i][j])
				x = arr2d[i][j];
		}
	}
	return x;
}
/*
Please input 3 sets of five double numbers each.
1 2 3 4 5
2 3 4 5 6
3 4 5 6 7
The array is:
	1.00    2.00    3.00    4.00    5.00
	2.00    3.00    4.00    5.00    6.00
	3.00    4.00    5.00    6.00    7.00
aver of each row:
	3.00    4.00    5.00
aver of arr2d is  4.00
max of arr2d is  7.00

*/