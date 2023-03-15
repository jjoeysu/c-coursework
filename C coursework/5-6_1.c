#include<stdio.h>
int main(void)
{
	int s;
	printf("Enter the score(q to quit): ");
	while (scanf("%d", &s) == 1) {
		if (s >= 90) printf("The grade is A.\n");
		else if (s < 90 && s >= 80)
			printf("The grade is B.\n");
		else if (s < 80 && s >= 70)
			printf("The grade is C.\n");
		else if (s < 70 && s >= 60)
			printf("The grade is D.\n");
		else printf("The grade is E.\n");
			printf("Enter the score(q to quit): ");
	}
	return 0;
}
/*
Enter the score(q to quit): 95
The grade is A.
Enter the score(q to quit): 85
The grade is B.
Enter the score(q to quit): 50
The grade is E.
Enter the score(q to quit): q

*/