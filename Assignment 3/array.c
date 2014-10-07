int max(int array[], int n)
{
	int maxNum = array[0];
	for (int i = 0; i < n; i++)
	{
		if (array[i] > maxNum)
			maxNum = array[i];
	}
	return maxNum;
}

int countValue(int array[], int n, int value)
{
	int valTimes = 0;
	for (int i = 0; i < n; i++)
	{
		if (array[i] == value)
			valTimes++;
	}
	return valTimes;
}

void absolute(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (array[i] < 0)
			array[i] *= -1;
	}

}

int isSorted(int array[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		if (array[i] > array[i+1])
			return 0; //Not sorted
	}
	return 1; //Sorted
}

int isPermutation (int array[], int n)
{
	for (int i = 0; i < n-1; i++) // Loop through orig array
	{
		if (array[i] < 1 || array[i] > n)
			return 0; // Not from 1 to n

		for (int j = i + 1; j < n; j++) // Loop from current index of array to last element
		{
			if (array[i] == array[j])
			{
				return 0; // Repeated value
			}
		}
	}
	return 1;
}