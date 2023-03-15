#include<stdio.h>
#include<stdbool.h>
#define STOP '#'
int main(void)
{
	char c; long n_chars = 0, n_spaces = 0,n_others=0;
	int n_lines = 0;
	bool inword = false;
	printf("Enter text (# to quit):\n");
	while ((c = getchar()) != STOP) {
		n_chars++;
		if (c == '\n') n_lines++;
		if (c == ' ') n_spaces++;
	}
	n_others = n_chars - n_lines - n_spaces;
	printf("Number of space is %ld\nNumber of newline is %d\n\
Number of other characters is %ld",n_spaces,n_lines,n_others);
	return 0;
}
/*
Enter text (# to quit):
Polygon meshes are an effient representation
of 3D geometry, and are of central importance
in computer graphics, robotics and games
development.
#
Number of space is 17
Number of newline is 4
Number of other characters is 124
*/