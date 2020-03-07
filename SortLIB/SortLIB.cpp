// SortLIB.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"

// TODO: Это пример библиотечной функции.
void bubbleSort(int* a, int n)
{
	for (int i = n - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (a[i] < a[j])
			{
				int b = a[i];
				a[i] = a[j];
				a[j] = b;
			}
		}
	}
}

void shellSort(int* a, int n)
{
	{
		int i, j, step;
		int tmp;
		for (step = n / 2; step > 0; step /= 2)
			for (i = step; i < n; i++)
			{
				tmp = a[i];
				for (j = i; j >= step; j -= step)
				{
					if (tmp < a[j - step])
						a[j] = a[j - step];
					else
						break;
				}
				a[j] = tmp;
			}
	}
}
