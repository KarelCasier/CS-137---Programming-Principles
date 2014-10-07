#include <stdio.h>
#include <math.h>

int BinToDec10(int bin[], int n)
{
	int number = 0;
	for (int i = n - 1; i > -1; i--)
	{
		number += bin[i] * pow(2, n-(i+1));
		//printf("%d\n", n-(i+1));
		//printf("bin[i] * pow(2, n-i+1) = %d * %d\n", bin[i], pow(2, n-(i+1)));
	}
	return number;
}

int main(void)
{
	int array[] = {1,0,1,0,1,0};
	printf("%d = %d\n", 101010, BinToDec10(array,6));

	int array2[] = {1,1,1,1,1,1,1,1,1,1,0};
	printf("%d = %d\n", 11111111110, BinToDec10(array2,11));
}