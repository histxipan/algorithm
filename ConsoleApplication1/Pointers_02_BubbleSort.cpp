#include "Pointers_02_BubbleSort.h"
#include <iostream>

void swap(int array[], int i, int j);

void BubbleSort1(int array[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			if (array[i] > array[j])
				swap(array, j, i);
		}
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d\x20", array[i]);
	}
}

void BubbleSort2(int array[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = n - 1; j >= i; j--)
		{
			if (array[j - 1] > array[j])
				swap(array, j, j - 1);
		}
	}
}

void swap(int array[], int i, int j)
{
	int temp = array[i];
	array[i] = array[j];
	array[j] = temp;
}
