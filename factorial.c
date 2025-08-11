#include <stdio.h>

int factorial (int x)
	{
	int i, result = 1;
	for(i=1; i<=x; i++)
		result *= i;
		return result;
	}
int main()
	{
	int x,y;
	printf("Enter a number:");
	scanf("%d", &x);
	y = factorial(x);
	printf("The Factorial  of %d is %d\n", x,y);
	return 0; 
	}
