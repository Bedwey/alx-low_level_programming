#include "main.h"

/**
 * factorial - functions return the value of x raised to the power of y.
 *
 * @n: input number
 *
 * Return: factorial of a given number.
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
