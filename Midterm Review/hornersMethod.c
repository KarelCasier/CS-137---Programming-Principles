#include <stdio.h>

int hornersMethod(int f[], int n, int x)
{
	int result = f[0];

	for (int i = 1; i < n; i++)
	{
		result = result * x + f[i];
	}
}

int main(void)
{
	int f[] = {-6,5,8,2,4}; // -6x^4 + 5x^3 +8x^2 + 2x + 4

	printf("f(%d) = %d\n", 5, hornersMethod(f,5,5));
}

// -6x^4 + 5x^3 +8x^2 + 2x + 4
// ((((-6x + 5)x + 8)x + 2)x + 4