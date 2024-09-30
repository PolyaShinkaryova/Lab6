
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <conio.h>
#include <math.h> 
#include <locale.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");
	int yeas;
	puts("¬ведите год");
	scanf("%d", &yeas);
	int ost1 = yeas % 4;
	int ost2 = yeas % 100;
	int ost3 = yeas % 400;



	if (((ost1 == 0) && (ost2 != 0)) || (ost3 == 0))
	{
		printf("год %d високосный", yeas);
	}

	else
	{
		printf("год %d не високосный", yeas);
	}
}