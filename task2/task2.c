#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <conio.h>
#include <math.h> 
#include <locale.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");
	float x;
	puts("¬ведите число");
	scanf("%f", &x);

	
	printf("%.2f", x >= 3.5 ? 4 * pow(x, 2) + 2 * x - 19 : -(2 * x) / (-4 * x + 1)); // при x = 4  ans = 53; при x = 3 ans = 0.(54) 
}