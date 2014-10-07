#include <stdio.h>

void toBin(int number);

int main(void)
{
	printf("Input number to convert to binary: ");
	int num = 0;
	scanf("%d", &num);
	toBin(num);
}