#include "main.h"
int actual_prime(int n, int a);
/**
 * is_prime_number - Returns a prime number
 * @n: input
 * Return: 1 if n is a prime number else return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - A recursive calculator of whether a number is prime
 * @n: input
 * @a: iterator
 * Return: 1 if n is a prime number else return 0
 */
int actual_prime(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0 && a > 0)
		return (0);
	return (actual_prime(n, a - 1));
}
