#include <stdio.h>

int isPermutation (int array[], int n)
{
	for (int i = 0; i < n-1; i++) // Loop through orig array
	{
		if (array[i] < 1 || array[i] > n)
			return 0;

		for (int j = i + 1; j < n; j++) // Loop from current index of array to last element
		{
			if (array[i] == array[j])
			{
				return 0; // Repeated value
			}
		}
	}
	return 1; // None repeated
}

void printArray(int array[])
{
	int arraySize = 9;
	for (int i = 0; i < arraySize; i++)
		printf("%d ", array[i]);
	printf("\n");
}

int sudoku(int grid[9][9])
{
	for (int i = 0; i < 9; i++)
	{
		int columnArray[9] = {0};
		for (int j = 0; j < 9; j++)
			columnArray[j] = grid[j][i];

		if (!isPermutation(grid[i],9) || !isPermutation(columnArray,9))
		{
			return 0;
		}

		for (int a = 0; a < 3; a++) // Block number
		{
			for (int b = 0; b < 3; b++)
			{
				int blockTotal = 0;
				for (int x = 0; x < 3; x++)
				{
					for (int y = 0; y < 3; y++)
					{
						blockTotal += grid[(a * 3) + x][(b * 3) + y];
					}
				}
				if (blockTotal != 45)
					return 0;
			}
		}
	}
	return 1;
}
