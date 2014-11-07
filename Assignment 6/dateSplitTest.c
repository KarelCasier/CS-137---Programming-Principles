#include <stdio.h>

int dateSplit(int dayOfYear, int year, int *day, int *month);

void testDateSplit(int dayOfYear, int year)
{
  int day, month;

  if (dateSplit (dayOfYear, year, &day, &month))
    printf ("%d,%d => %d,%d\n", dayOfYear, year, day, month);
  else
    printf ("%d,%d => invalid\n", dayOfYear, year);
}

int main (void)
{
  testDateSplit(-1,2014);
  testDateSplit(0,2014);

  for (int i = 1752; i < 2014; i++)
        for (int j = -2; j < 367; j++)
            testDateSplit(j, i);

  return 0;
}