#include"func.h"

void print(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	system("pause");
	printf("\n");
}

void initrand(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 37;
	}
}

void initarpr(int* a, int n)
{
	int f, s;
	printf("Введите первый член и шаг.");
	scanf("%d %d", &f, &s);
	a[0] = f;
	a[1] = f + s;
	for (int i = 2; i < n; i++)
	{
		a[i] = a[i-1] + s;
	}
}

void scan(int *a, int *n)
{
	scanf("%d", n);
}

void initscan(int* a, int n)
{
	printf("Ручной ввод работает только для N =< 10 \n");
	if (n > 10) {
		printf("Массив слишком большой, ручной ввод неудобен. ");
		system("pause");
		printf("\n");
	}
	else
	{
		printf("Введите %d элементов через пробел", n);
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
	}
}