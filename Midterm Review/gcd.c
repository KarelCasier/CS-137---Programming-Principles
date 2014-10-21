#include <stdio.h>

int gcd(int a, int b)
{
	int temp = 0;

	while (b!=0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int main(void)
{
	printf("%d\n", gcd(12,4));
	printf("%d\n", gcd(13,4));
	printf("%d\n", gcd(100,4));
	printf("%d\n", gcd(12,6));
	printf("%d\n", gcd(12,8));
}