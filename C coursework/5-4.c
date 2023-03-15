#include<stdio.h>
int main(void)
{
	char c; int n = 0;
	printf("Enter some texts(# to quit): \n");
	while ((c = getchar()) != '#') {
		if (c == '!') {
			printf("!!");
			n++;
		}
		else if (c == '.') {
			printf("!!");
			n++;
		}
		else putchar(c);
	}
	printf("%d replacements in total", n);
	return 0;
}
/*
Enter some texts(# to quit):
Hi, John. You are so good!
Hi, John!! You are so good!!
#
2 replacements in total
*/