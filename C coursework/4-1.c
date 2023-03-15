#include<stdio.h>
int main(void)
{
	char z[30] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	for (i = 0; i < 26; i++)
		z[i] = z[i]-32;
	printf("%s", z);
	return 0;
}
/*
ABCDEFGHIJKLMNOPQRSTUVWXYZ
*/