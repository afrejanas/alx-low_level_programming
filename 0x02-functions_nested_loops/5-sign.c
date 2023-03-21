#include "main.h"
/**
 * print_sign -  that prints the sign of a number.
 * @n: single integer input
 * Return: 1 if c is a letter (lower or uppercase), 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
