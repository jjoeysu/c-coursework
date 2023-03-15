#include<stdio.h>
int main(void)
{
	float NUM=21.290;
	printf("The input is %.1f or %7.1e\n", NUM,NUM);
	printf("The input is %+.3f or %9.3E\n", NUM,NUM);
	return 0;
}