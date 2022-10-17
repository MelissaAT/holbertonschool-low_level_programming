#include "main.h"
/**
 * is_prime_number - returns if the imput integer is a prime number
 * prime - funtion created
 * @n: number
 * @i: variable
 */
int prime(int i, int n);

int is_prime_number(int n)
{
	return (prime(2, n));
}
int prime(int i, int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (i % n == 0)
	{
			return (1);
	}
	else
	{
		return (prime(i, n - 1));
	}
}
