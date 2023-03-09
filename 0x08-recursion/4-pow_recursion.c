#include "main.h"

/**
* _pow_recursion - value of x^y
* @x: number
* @y: number
* Return: x^y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else  if (y > 0)
	{
		int tmpY = y - 1;

		return (x * _pow_recursion(x, (tmpY)));
	}
	else
		return (1);
}
