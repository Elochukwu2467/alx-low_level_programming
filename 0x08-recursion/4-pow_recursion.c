#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: the value to multiple
 * @y: the times to multiple the value
 *
 * Return: the value multipied y times
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
