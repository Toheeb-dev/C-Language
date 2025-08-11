#include <stdio.h>
#include <stdlib.h>
void display();
#define A 10
void main()
	{
		printf("Hello World");
		const int ch =  10;
		int a;
		int sum__12;
		int d=4, e = 5;
		char *int_type = "test";
		float b = 4.5;	
		char c = 'c';
		//double salary;
		//long double average;
		system("clear");
		a = 65536;
		printf("%d", a);
		printf("%c", 98);
		printf("%f", b);
		//printf("%Lf", salary); long double
		//printf("%lf", average); double
		display();
		getchar();
	}
void display()
	{
		char int_type[] = "toheeb";	
		printf("genuine developer");
		printf("%lu", sizeof(int));
	}
