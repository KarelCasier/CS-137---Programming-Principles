#include <stdio.h>

void factor (int number);

int main (void)
{
  factor (100);
  factor (21);
  factor (123392);
  factor (2147483647);
  factor (23458);
  return 0;
}