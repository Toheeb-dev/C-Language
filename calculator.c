#include <stdio.h>
int main()
{
char operator;
int a,b;
printf("Enter the operator: ");
scanf("%c",&operator);
printf("Enter the two numbers or operates: ");
scanf("%d %d", &a, &b);
switch(operator)
{
	case '+':
		printf("%d %c %d = %d \n", a, operator, b, a+b);
		break;
	case '-':
		printf("%d %c %d = %d \n", a, operator, b, a-b);
                break;
	case '*':
		printf("%d %c %d = %d \n", a, operator, b, a*b);
                break;
	case '/':
		printf("%d %c %d = %d \n", a, operator, b, a/b);
                break;
	case '%':
		printf("%d %c %d = %d \n", a, operator, b, a+b);
                break;
	default:
		printf("Enter a valid operator or sign\n");

		
	}
}
