#include <stdio.h>

int dayOfYear(int day, int month, int year);

int main(void)
{

	while (1)
	{
		int day=0;
		int month = 0;
		int year = 0;
		scanf("%d", &day);
		scanf("%d", &month);
		scanf("%d", &year);
		printf("Number of Days: %d\n", dayOfYear(day, month, year));
	}
}