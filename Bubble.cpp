// Bubble.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	int array[100], sz, i, j, swap;
	srand(time(NULL));
	printf("Enter size of an array\n");
	scanf("%d", &sz);
	for (i = 0; i < sz; i++) {
		array[i] = rand() % 1001 - 500;
	}
	for (i = 0; i < (sz - 1); i++);
	{
		for (j = 0; i < sz - i - 1; j++);
		{
			if (array[j] > array[j + 1])
			{
				swap = array[j];
				array[j] = array[j + 1];
				array[j + 1] = swap;
			}
		}
	}
	printf("sorted array using buublesort:\n");
	for (i = 0; i < sz; i++)
		printf("%d%c", array[i], i < sz - 1 ? '\t' : '\n');
    return 0;
}

