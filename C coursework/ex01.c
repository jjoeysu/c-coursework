#include<stdio.h>
#define NAME "Su Xiaoyi"
int main(void)
{
	char c;
	c = '\"';
	printf("%c%s%c\n",c,NAME,c);
	printf("%c%20s%c\n", c, NAME, c);
	printf("%c%-20s%c\n", c, NAME, c);
	printf("%c%12s%c\n", c, NAME, c);
		return 0;
}
