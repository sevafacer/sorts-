#include"func.h"

void statsort(int* a, int n)
{
	int b[37]{ 0 };


		for (int i = 0; i < n; i++)
		{
			b[a[i] - 1]++;
		}
		n--;
		for (int i = 37 - 1; i >= 0; i--)
		{
			while (b[i])
			{
				a[n] = i + 1;
				n--;
				b[i]--;
			}
		}
	
}

void quicksort(int* a, int first, int last) {
	int c, f, l, t;
	t = 0;
	f = first;
	l = last;
	c = a[(f + l) / 2];
	while (f <= l) {
		while (a[f] < c) {
			f++;
		}
		while (a[l] > c) {
			l--;
		}
		if (f <= l) {
			if (f < l) {
				t = a[f];
				a[f] = a[l];
				a[l] = t;
			}
			f++;
			l--;
		}
	}
	if (f < last)
		quicksort(a, f, last);
	if (first < l)
		quicksort(a, first, l);
}

void bubblesort(int* a, int n)
{
	int i, j, c;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1; j++)
			if (a[j] > a[j + 1]) {
				c = a[j];
				a[j] = a[j + 1];
				a[j + 1] = c;
			}
	}
}

void mbmin(int* a, int n) {
	int i, j, c, i_min;
	for (i = 0; i < n - 1; i++) {
		i_min = i;
		for (j = i + 1; j < n; j++)
			if (a[i_min] > a[j])
				i_min = j;

		c = a[i_min];
		a[i_min] = a[i];
		a[i] = c;


	}

}

void flag(int* a, int n)
{
	int i = 0, j, t;
	bool f = true;
	while (f)
	{
		f = false;
		for (j = 0; j < n - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				f = true;
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}i++;
	}
}

