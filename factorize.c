#include <stdio.h>

/**
 * The function works by starting at 2, testing if the input number is divisible by 2. 
 * If it is divisible, the number is composite and we return 0. 
 * If it's not, we test every odd number greater than 2 as a divisor of the input number. 
 * If we find a divisor, the number is composite, otherwise, it's prime.
 */

int division(long int n)
{
	long int r;

	if (n%2 == 0)
	{
		printf("%lu=%lu*%i\n", n, n/2, 2);
		return (0);
	}

	r = 3;
	while (r*r <= n )
	{
		if (n%r == 0)
		{
			printf("%lu=%lu*%lu\n", n, n/r, r);
			return (0);
		}
		else
		{
			r += 2;
		}
	}
	printf("%lu=%lu*%i\n", n, n, 1);
	return (0);
}

