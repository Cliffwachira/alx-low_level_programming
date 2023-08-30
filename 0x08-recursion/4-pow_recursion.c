#include "main.h"
/**
 * _pow_recurssion - returns the value of  raised to the power of y
 * @x: the value to multiply
 * @y: the valu to multiply the value
 *
 * Return: the value multiplied by y times
 */
int  _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
