#include <stdio.h>

void printPyramid(int);

int main(void)
{
	int numRows = 0;
	printf("%s", "Enter the number of rows: ");
	scanf("%d", &numRows);
	printPyramid(numRows);

}

void printPyramid(int numRows)
{
	for (int i = 0; i < numRows; i++)
	{
		for (int j = 0; j < numRows - (i+ 1); j++) //Print leading spaces
		{
			printf("%s", " ");
		}

		for (int j = (i + 1); j > 0; j--) //Add external pyramid
		{
			printf("%s", "*");
		}

		for (int j = (i); j > 0; j--) // Add internal pyramid
		{
			printf("%s", "*"); 
		}


		printf("\n");
	}

}