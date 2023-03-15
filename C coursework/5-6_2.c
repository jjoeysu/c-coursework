#include<stdio.h>
int main(void)
{
	int s;
	printf("Enter the score(q to quit): ");
	while (scanf("%d", &s) == 1) {
		switch (s / 10) {
		case 10:printf("The grade is A.\n"); break;
		case 9:printf("The grade is A.\n"); break;
		case 8:printf("The grade is B.\n"); break;
		case 7:printf("The grade is C.\n"); break;
		case 6:printf("The grade is D.\n"); break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:printf("The grade is E.\n"); break;
		default:printf("Error.\n");
		}
		printf("Enter the score(q to quit): ");
	}
	return 0;
}
/*
Enter the score(q to quit): 95
The grade is A.
Enter the score(q to quit): 60
The grade is D.
Enter the score(q to quit): 59
The grade is E.
Enter the score(q to quit): q

*/