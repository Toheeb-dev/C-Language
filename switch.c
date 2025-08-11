#include <stdio.h>
void main()
{
int mark;
printf("Enter your mark: ");
scanf("%3d", &mark);
if(mark <= 100)
	{
	switch(mark/10)
	{
	case 10:
		printf("Execellent! You got A, keep it up.\n\n");
		break;
	case 9:
	case 8:
		printf("Welldone! You got A, you can do more than this\n\n");
		break;
	case 7:
		printf("Good! You got B\n\n");
		break;
	case 6:
		printf("Well, not bad! You got C\n\n");
		break;
	default:
		printf("So bad! you got D. Try your best next time.\n\n");
	}
	printf("Whatever you got, dont be depressed, give up or over joy, do better next time.");
	}
else
	printf("A mark cannot exceed 100 marks");
}

