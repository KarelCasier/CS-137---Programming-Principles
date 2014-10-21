#include <stdio.h>
#include <math.h>
#include <assert.h>


double bisection(double endA, double endB, double tollerance, int maxIt, double (*f)(double));

double f1(double x);
double f2(double x);


int main(void)
{
	printf( "%g\n", bisection (-M_PI_2,M_PI_2,0.001,10000, f2));
}

double bisection(double endA, double endB, double epsilon, int maxIt, double (*f)(double))
{
	assert(f(endA) < 0.0 && f(endB) > 0.0); //Stop if setup wrong
	assert(epsilon > 0.0); // Stop if tollerance is negative

	double mid = 0;

	for (int n = 0; n < maxIt; n++)
	{
		mid = (endA + endB)/2.0; // Find new midpoint

		if (fabs(f(mid)) < epsilon)
			return mid;

		if (f(mid) > 0) // Replace B with Mid
			endB = mid;
		else // Replace A with Mid
			endA = mid;
	}
	return mid;

}

double f1(double x)
{
	return x-cos(x);
}

double f2(double x)
{
	return (pow(x, 3) + 3);
}