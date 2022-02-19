#include"func.h"


void menu(int *a, int *n)
{
	int op = 0;
	char c;
	
	double start, finish, result;

	char menu_str[12][350] = { {"���� ���������� ���������"},
		{"��������� ��������� �������"},
		{"��������� ����� �������������� ����������"},
		{"��������������� ����  (N <= 10)"},
		{"���������� ������� ���������"},
		{"���������� ������� � ������� �����"},
		{"���������� � ������� ������������"},
		{"���������� ��������� (��� ��������� ������ ������� ����� ������ � ��������� ��������� �� ������ ��������� 37)"},
		{"���������� �����(�������)"},
		{"����� �������"}};
	int n_op = 10;


	while (true)
	{
		system("cls");
		printf("       ����\n  ������ � ��������� \n");
		for (int i = 0; i < n_op; i++)
		{
			if (i == op)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
			printf("%s \n", menu_str[i]);
		}
		c = _getch();

		if (c == -32)
		{
			c = _getch();
		}

		if (c == 72) {
			op = (op + n_op - 1) % n_op;
		}

		if (c == 80) {
			op = (op + 1) % n_op;
		}

		if (c == 27)
		{
			break;
		}

		if (c == 13)
		{
			switch (op)
			{
			case 0:
				scan(a, n);
				break;
			case 1:
				initrand(a, *n);
				break;
			case 2:
				initarpr(a, *n);
				break;
			case 3:
				initscan(a, *n);
				break;
			case 4:
				start = clock();
					bubblesort(a, *n);
					finish = clock();
					result = (finish - start) / CLOCKS_PER_SEC;
					printf("����� ���������� ����������:\n        %.20f\n  ���-�� �������� n*n\n", result);
					system("pause");
					printf("\n");
					break;
			case 5:
				start = clock();
				flag(a, *n);
				finish = clock();
				result = (finish - start) / CLOCKS_PER_SEC;
				printf("����� ���������� ����������:\n        %.20f\n  ���-�� �������� n^n!\n", result);
				system("pause");
				printf("\n");
				break;
			case 6:
				start = clock();
				mbmin(a, *n);
				finish = clock();
				result = (finish - start) / CLOCKS_PER_SEC;
				printf("����� ���������� ����������:\n        %.20f\n  ���-�� �������� n*n\n", result);
				system("pause");
				printf("\n");
				break;
			case 7:
				start = clock();
				statsort(a, *n);
				finish = clock();
				result = (finish - start) / CLOCKS_PER_SEC;
				printf("����� ���������� ����������:\n        %.20f\n  ���-�� �������� n\n", result);
				system("pause");
				printf("\n");
			case 8:
				start = clock();
				quicksort(a, 0, *n-1);
				finish = clock();
				result = (finish - start) / CLOCKS_PER_SEC;
				printf("����� ���������� ����������:\n        %.20f\n  ���-�� �������� n^2\n", result);
				system("pause");
				printf("\n");
				break;
			case 9:
				print(a, *n);
				break;
			default:
				break;
			}
		}
	}
}