#include<stdio.h>
#include<math.h>
int main(void)
{
	int n,i;
	double sumS,sumT;
	printf("Calculate the following number of stages:\n");
	printf("S(n)=1/2+1/3+...+1/n\nT(n)=1-1/2+1/3-1/4+...+(-1)^(n+1)/n\n");
		printf("Please enter a value of n (0 to quit) :");
		scanf("%d", &n);
		while (n > 0)
		{
			sumS = 0, sumT = 0;
			for (i = 1; i < n; i++)
			{
				sumS = sumS + 1.0 / i;
				sumT = sumT + pow(-1, i) / i;
			}
			printf("S(%d) = %.6f\nT(%d)= %.6f\n", n, sumS, n, sumT);
			printf("Please enter a value of n again (0 to quit) :");
			scanf("%d", &n);
		}
	return 0;
}
/*
Calculate the following number of stages:
S(n)=1/2+1/3+...+1/n
T(n)=1-1/2+1/3-1/4+...+(-1)^(n+1)/n
Please enter a value of n (0 to quit) :20
S(20) = 3.547740
T(20)= -0.718771
Please enter a value of n again (0 to quit) :100
S(100) = 5.177378
T(100)= -0.698172
Please enter a value of n again (0 to quit) :500
S(500) = 6.790823
T(500)= -0.694148
Please enter a value of n again (0 to quit) :0
*/