#include <stdio.h>
//#include <stdlib.h>

typedef enum {false, true} bool;

int main(void)
{
	//int * toPrintArr = malloc(0*sizeof(int));
	//int size = 0;
	int input = 1;
	int used[10] = {0};
	while(input > 0)
	{
		//printf("In: ");
		scanf("%d", &input);
		if (input <= 0)
			break;
		int toPrint = false;
		int num = input;
		//while (num/10 != 0)
		int numTimes = 0;
		int tempNum = num;
		while (tempNum /10 != 0)
		{
			numTimes++;
			tempNum /= 10;
		}
		numTimes++;
		//printf("numTimes: %d\n", numTimes);
		for (int i = 0; i < numTimes; i++) //Loop though number of decimal places
		{
			int decNum = num%10; //Get ones column
			//printf("decNum: %d\n", decNum);
			if(used[decNum] == 0)
			{
				used[decNum] = 1;
				toPrint = true; //If found a unique value -> set to print
			}
			num -= num % 10;
			num /= 10;
			//printf("num: %d\n", num);
		}
		if (toPrint && input > 0)
		{
			printf("%d\n", input);
			//toPrintArr = realloc(toPrintArr, (++size)*(sizeof(*toPrintArr)));
			//toPrintArr[size-1] = input;
		}
	}
	//printf("\n");
	//printf("\n");
	//for (int i = 0; i < size; i++)
	//{
	//	printf("%d\n", toPrintArr[i]);
	//}
	return 0;
}
