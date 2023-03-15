#include<stdio.h>
#include<string.h>
int main(void)
{
	char firstname[10];
	char lastname[10];
	scanf_s("%s %s", firstname,10,lastname,10);
	printf("%s %s\n", firstname,lastname);
	printf("%*d %*d\n", strlen(firstname), strlen(firstname), 
		strlen(lastname), strlen(lastname));
	printf("%s %s\n", firstname, lastname);
	printf("%-*d %-*d", strlen(firstname), strlen(firstname),
		strlen(lastname), strlen(lastname));
	return 0;
}