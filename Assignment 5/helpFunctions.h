int gcd(int n, int m)
{
	int gcd, remainder;

	while (n != 0)
	{
		remainder = m % n;
		m = n;
		n = remainder;
	}

	gcd = m;

	return gcd;
}
