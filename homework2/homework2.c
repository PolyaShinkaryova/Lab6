#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <conio.h>
#include <math.h> 
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");

	puts("������� ���������� x");
	int x;
	scanf("%d", &x);

	puts("������� ���������� y");
	int y;
	scanf("%d", &y);


	if (x >= -2 && x <= 2)
	{
		if (y>= -5 && y <= 5)
		{
			printf("������");
		}
		else 
		{
			printf("�� ������");
		}
	}
	else
	{
		if (x >= -5 && x <= -1)
		{
			if (y >= -5 && y <= -2)
			{
				printf("������");
			}
			else
			{
				printf("�� ������");
			}
		}
		else
		{
			if (x>= 2 && x <= 6)
			{
				if (y >= 2 && y <= 5)
				{
					printf("������");
				}
				else
				{
					printf("�� ������");
				}
			}
			else
			{
				printf("�� ������");
			}
		}
	}
}