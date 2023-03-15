#include<stdio.h>
int main(void)
{
	char ch; int a = 0, b = 0;
	while ((ch = getchar()) != EOF) {
		if (ch >= 'A' && ch <= 'Z') a++;
		if (ch >= 'a' && ch <= 'z') b++;
	}
	printf("In this char flow, there are %d \
capital letters, %d small letters.", a, b);
	return 0;
}
/*
Wuhan University
In this char flow, there are 2 capital letters, 13 small letters.
*/