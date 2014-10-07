#include <stdio.h>

int isTwin(int n);

void testTwin (int number)
{
  if (isTwin(number))
    printf ("%d is a twin prime\n", number);
  else
    printf ("%d is not a twin prime\n", number);
}

int main (void)
{
  for (int i = -500; i < 1000; i++)
  {
    testTwin(i);
  }
}