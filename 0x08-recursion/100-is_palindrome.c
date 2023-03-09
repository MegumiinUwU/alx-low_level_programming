#include "main.h"

/**
* verifyP - verify if string is palindrome
* @s: input string
* @start: start focus
* @final1: final focus
* Return: 1 -> palindrome, else -> 0
*/
int verifyP(int start, int final1, char *s)
{
	if (start >= final1)
	{
		return (1);
	}
	if (s[start] == s[final1])
	{
		int newStart = start + 1;
		int newFinal = final1 - 1;

		return (verifyP(newStart, newFinal, s));
	}
	else
	{
		return (0);
	}
}

/**
*_strlen_recursion - know length
*@s: char
*
*Return: length
*/
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	else
	{
		return (_strlen_recursion(s + 1) + 1);
	}
}

/**
 * is_palindrome - know if is palindrome
 * @s: string
 * Return: 1 -> palindrome, 0 -> palindrome
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);
	int finPos = length - 1;

	if ((verifyP(0, finPos, s)) == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
