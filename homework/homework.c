#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <conio.h>
#include <math.h> 
#include <locale.h>


int main()
{

	setlocale(LC_ALL, "RUS");

	puts("Введите четырехзначное число");

	int x;
	scanf("%d", &x);

	int a;
	a = x % 10; // единицы
	int b;
	b = (x / 10) % 10; // десятки 
	int c;
	c = (x / 100) % 10; // сотни
	int d;
	d = (x / 1000); // тысячи


	if ((a == d) && (b == c))
	{
		printf("Да");
	}
	else
	{
		printf("Нет");
	}
}