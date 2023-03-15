#include<stdio.h>
int main(void)
{
	int a, b,max=100,min=0; char ch,c;
	printf("Pick an integer from 1 to 100. I will try \
to guess it. \nRespond with a y if my guess is \
right and with \nan n if it is wrong.\n");
	printf("Please input your initial guess: ");
	scanf("%d%c", &a, &c); b = a;
	printf("Uh...is your number bigger, \
smaller than or equal to %d? \n", a);
	while ((ch = getchar()) != '=') {
		if (ch == '<') {
			max = b, b = (max + min) / 2;
		}
		else if (ch == '>') {
			min = b, b = (max + min) / 2;
		}
		else
			printf("Sorry, I understand only >, < or =. \n");
		while ((ch = getchar()) != '\n')
			continue;
		printf("Uh...is your number bigger,\
 smaller than or equal to %d? \n", b);

	}
	printf("I knew I could do it!");
	return 0;
}
/*
Pick an integer from 1 to 100. I will try to guess it.
Respond with a y if my guess is right and with
an n if it is wrong.
Please input your initial guess: 50
Uh...is your number bigger, smaller than or equal to 50?
no
Sorry, I understand only >, < or =.
Uh...is your number bigger, smaller than or equal to 50?
<
Uh...is your number bigger, smaller than or equal to 25?
<
Uh...is your number bigger, smaller than or equal to 12?
>
Uh...is your number bigger, smaller than or equal to 18?
>
Uh...is your number bigger, smaller than or equal to 21?
>
Uh...is your number bigger, smaller than or equal to 23?
=
I knew I could do it!
*/