#include<stdio.h>
int main(void)
{
	int i,j=1;
	int s[10];
	printf("¦Á=(a(1),...,a(8)) ¡Ê  Z^8 £¬a(i) = 2^i£¨i=1,2,...,8£©\n");
	for (i = 1; i <= 8; )
	{
		s[0] = 1;
		s[i] = 2 * s[i - 1];
		i++;
	}
	do {
		printf("a(%d£©= %d \n",j, s[j]);
		j++;
	} while (j <= 8);
	return 0;
}
/*
¦Á=(a(1),...,a(8)) ¡Ê  Z^8 £¬a(i) = 2^i£¨i=1,2,...,8£©
a(1£©= 2
a(2£©= 4
a(3£©= 8
a(4£©= 16
a(5£©= 32
a(6£©= 64
a(7£©= 128
a(8£©= 256

*/