#include<stdio.h>
void show_chars(char ch, int rows, int cols);
int main(void)
{
	char ch; int rows, cols;
	printf("Enter a character you want to show: ");
	while ((ch=getchar()) != EOF) {
		printf("Enter rows and cols you want to show: ");
		scanf("%d %d", &rows, &cols);
		show_chars(ch, rows, cols);
		while (getchar() != '\n')
			continue;
		printf("Enter a character you want to show: ");
	}
	printf("Finished!");
	return 0;
}
void show_chars(char ch, int rows, int cols) {
	int i, j;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++)
			printf("%c", ch);
		printf("\n");
	}
}
/*
Enter a character you want to show: *
Enter rows and cols you want to show: 2 3
***
***
Enter a character you want to show: $
Enter rows and cols you want to show: 3 4
$$$$
$$$$
$$$$
Enter a character you want to show: ^Z
Finished!
*/