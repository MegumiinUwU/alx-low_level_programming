#include "main.h"

/**
* verifyPrime - verify if a number is prime
* @objective: number
* @candidate: candidate
* Return: 1 -> prime, 0 -> no_prime
*/
int verifyPrime(int objective, int candidate)
{
	int indivisible = objective % candidate;

	if ((indivisible == 0) && (candidate < objective))
	{
		return (0);
	}
	else if ((indivisible == 0) && (candidate == objective))
	{
		return (1);
	}
	if (indivisible != 0)
	{
		return (verifyPrime(objective, candidate + 1));
	}
	return (0);
}

/**
* is_prime_number - detect prime number
* @n: input number
* Return: 1 -> prime, 0 -> no-prime
*/
int is_prime_number(int n)
{
	if (n >= 2)
	{
		return (verifyPrime(n, 2));
	}
	else
	{
		return (0);
	}
	return (0);
}
