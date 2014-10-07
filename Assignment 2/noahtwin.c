#include <stdio.h> 

int isPrime(int n)
{
  if(n == 2)
    return 1;
  if(n % 2 == 0)
    return 0;
  for(int i = 3; i*i <= n; i+=2)
  {   
    if (n % i ==0)
      return 0;
  }
  return 1;
}

int isTwin(int n)
{
  if(n > 0)
  {
  if(isPrime(n) && (isPrime(n-2) || isPrime (n+2)))
    return 1;
  }
  else
  {
    return 0;
  }
  return -9999999;
}