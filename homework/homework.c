#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <conio.h>
#include <math.h> 
#include <locale.h>


int main()
{

	setlocale(LC_ALL, "RUS");

	puts("������� �������������� �����");

	int x;
	scanf("%d", &x);

	int a;
	a = x % 10; // �������
	int b;
	b = (x / 10) % 10; // ������� 
	int c;
	c = (x / 100) % 10; // �����
	int d;
	d = (x / 1000); // ������


	if ((a == d) && (b == c))
	{
		printf("��");
	}
	else
	{
		printf("���");
	}
}