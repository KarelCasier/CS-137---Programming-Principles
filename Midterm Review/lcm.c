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

int lcm(int a, int b)
{
	return (a*b)/ gcd(a,b);
}

int main(void)
{
	printf("%d\n", lcm(4,5));
	printf("%d\n", lcm(4,10));
	printf("%d\n", lcm(3,14));
	printf("%d\n", lcm(9,7));

	return 0;
}