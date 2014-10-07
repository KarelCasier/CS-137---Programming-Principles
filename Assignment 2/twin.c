typedef enum { false, true } bool;

int isPrime(int number);

int isTwin(int number)
{
	if (number > 2)
	{
		if (isPrime(number))
		{
			if (isPrime(number-2) || isPrime(number+2))
			{
				return true;
			}
		}
	}
	return false;
}

int isPrime(int number)
{
	// Find Prime
	bool isPrimeNum = true;
	for (int i = 2; i < number-1; ++i)
	{
		if ((number % i) == 0)
			isPrimeNum = false;
	}
	return isPrimeNum;
}