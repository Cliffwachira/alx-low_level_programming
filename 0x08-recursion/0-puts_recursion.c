#include "main.h"
/**
 * _puts_recurssion -Print a string followed y new line
 * @s: the string to print
 *
 * Return: ALways 0 (success)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
