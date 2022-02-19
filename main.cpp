#include"func.h"

int main()
{
	int a[100];
	srand(time(NULL));
	setlocale(LC_ALL, "RUS");

	int n = 5;
	
	menu(a, &n);
	return 0;
}