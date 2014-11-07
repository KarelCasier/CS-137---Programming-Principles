#include <stdio.h>

typedef enum {false, true} bool;

int main(void)
{
	int input = 1;
	int used[10] = {0};
	while(input > 0)
	{
		scanf("%d", &input);
		if (input <= 0)
			break;
		int toPrint = false;
		int num = input;
		int numTimes = 0;
		int tempNum = num;
		while (tempNum /10 != 0)
		{
			numTimes++;
			tempNum /= 10;
		}
		numTimes++;
		for (int i = 0; i < numTimes; i++) //Loop though number of decimal places
		{
			int decNum = num%10; //Get ones column
			if(used[decNum] == 0)
			{
				used[decNum] = 1;
				toPrint = true; //If found a unique value -> set to print
			}
			num -= num % 10;
			num /= 10;
		}
		if (toPrint && input > 0)
		{
			printf("%d\n", input);
		}
	}
	return 0;
}
