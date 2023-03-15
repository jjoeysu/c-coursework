#include<stdio.h>
float getfloat(void);
int main(void)
{
	char ch; float a, b;
	printf("**************************\n");
	printf("*      Calculator        * \n");
	printf("**************************\n");
	printf("\nEnter the operation of your choice: \n");
	printf("+. add        -. substract \n*. multiply   \
/. divide \nq. quit \n");
	while ((ch = getchar()) != 'q') {
		switch (ch) {
		case'+':printf("Enter first number: ");
			a = getfloat();
			printf("Enter second number: ");
			b = getfloat();
			printf("%.2f + %.2f = %.2f\n", a, b,a + b);
			printf("\nEnter the operation of your choice: \n");
			printf("+. add        -. substract \n\
*. multiply   /. divide \nq. quit \n");
			break;
		case'-':printf("Enter first number: ");
			a = getfloat();
			printf("Enter second number: ");
			b = getfloat();
			printf("%.2f - %.2f = %.2f\n", a, b,a - b);
			printf("\nEnter the operation of your choice: \n");
			printf("+. add        -. substract \n\
*. multiply   /. divide \nq. quit \n");
			break;
		case'*':printf("Enter first number: ");
			a = getfloat();
			printf("Enter second number: ");
			b = getfloat();
			printf("%.2f * %.2f = %.2f\n", a, b,a * b);
			printf("\nEnter the operation of your choice: \n");
			printf("+. add        -. substract \n\
*. multiply   /. divide \nq. quit \n");
			break;
		case'/':printf("Enter first number: ");
			a = getfloat();
			printf("Enter second number: ");
			b = getfloat();
			while (b == 0) {
				printf("Sorry,please enter \
another second number: ");
				b = getfloat();
			}
			printf("%.2f / %.2f = %.2f\n", a, b, a / b);
			printf("\nEnter the operation of your choice: \n");
			printf("+. add        -. substract \n\
*. multiply   /. divide \nq. quit \n");
			break;
			while ((ch = getchar()) != '\n')
				continue;
		}
	}
	printf("Bye.");
	return 0;
}
float getfloat(void) {
	float d; char c[40];
	while (scanf("%f", &d) != 1) {
		gets(c);
		printf("%s is not a number. \nPlease enter a number,\n \
such as 2.5, -1.78E8, or 3: ", c);
	}
	while (getchar() != '\n');
		return d;
}
/*
**************************
*      Calculator        *
**************************

Enter the operation of your choice:
+. add        -. substract
*. multiply   /. divide
q. quit
+
Enter first number: 4
Enter second number: 3
4.00 + 3.00 = 7.00

Enter the operation of your choice:
+. add        -. substract
*. multiply   /. divide
q. quit
-
Enter first number: 8
Enter second number: 2
8.00 - 2.00 = 6.00

Enter the operation of your choice:
+. add        -. substract
*. multiply   /. divide
q. quit
*
Enter first number: 3
Enter second number: 4
3.00 * 4.00 = 12.00

Enter the operation of your choice:
+. add        -. substract
*. multiply   /. divide
q. quit
/
Enter first number: 2
Enter second number: s
s is not a number.
Please enter a number,
 such as 2.5, -1.78E8, or 3: 0
Sorry,please enter another second number: 5
2.00 / 5.00 = 0.40

Enter the operation of your choice:
+. add        -. substract
*. multiply   /. divide
q. quit
q
Bye.
*/