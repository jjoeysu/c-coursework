#include<stdio.h>
#include<stdbool.h>
bool is_leap(int year)
{
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		return(true);
	else return(false);
}
int main(void)
{
	int year;
	printf("Enter the year(q to quit) : ");
	while (scanf("%d", &year)==1) {
		if (is_leap(year))
			printf("%d is a leap year.\n",year);
		else printf("%d isn't a leap year.\n",year);
		printf("Enter the year(q to quit) : ");
	}
	return 0;
}
/*
Enter the year(q to quit) : 2011
2011 isn't a leap year.
Enter the year(q to quit) : 2012
2012 is a leap year.
Enter the year(q to quit) : 2013
2013 isn't a leap year.
Enter the year(q to quit) : q

*/