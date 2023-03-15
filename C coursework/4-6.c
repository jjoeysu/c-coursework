#include<stdio.h>
#include<string.h>
int main(void)
{
	char s[100];
	int i, a;
	printf("Please input the word:");
	scanf("%s", &s);
	a = strlen(s);
	for (i = a-1; i >=0;i--)
	{
		printf("%c", s[i]);
	}
	return 0;
}
/*
Please input the word:hello
olleh
*/