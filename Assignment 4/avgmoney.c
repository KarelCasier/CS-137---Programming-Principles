#include <stdio.h>

void printAverageAmount(double money[], int n)
{
    double total = 0;

    for (int i = 0; i < n; i++)
        {
            total += money[i];
        }

    double average = total / n;

    int dollars = (int)average;

    printf("Everyone gets %d dollar(s) and %d cent(s).\n", dollars, (int)((average-dollars)*100));
}
