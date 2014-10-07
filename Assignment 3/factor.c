#include <stdio.h>
typedef enum {false, true} bool;


/*int isPrime(int number)
{
	// Find Prime
	bool isPrimeNum = true;
	for (int i = 2; i < number-1; ++i)
	{
		if ((number % i) == 0)
			isPrimeNum = false;
	}
	return isPrimeNum;
}*/

int isPrime(int n)
{
	long i, s= 1,p = 1;
	while(p<=n)
      {
            s++;
            p=s*s;
      }
      for(i=2; i<s; i++)
      {
               if(n%i==0)
                {
                 return (0); //Not a prime
                }
       }
     return(1);
}

void factor(int number)
{
	if (number > 1)
	{
		printf("%d = ", number);
		int devisor = 2;
		int testNum = 1;
		int origNum = number;

		if (isPrime(number))
		{
			printf("%d", number);
		}
		else
		{
		while(devisor<=number) 
		{
			if (isPrime(devisor)) // Go to next prime number
			{
				if (number % devisor == 0)
				{
					number /= devisor;
					testNum *= devisor;
					if (testNum != origNum)
					{
						printf("%d*", devisor);
					}
					else
						printf("%d", devisor);
					devisor--;
				}
			}
			devisor++;
		}
	}
	}
	printf("\n");
}