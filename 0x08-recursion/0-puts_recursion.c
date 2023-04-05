#include "main.h"
/**
 * _puts_recursion - entry point
 * @s:  string inputed
 * Return: 0
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s != '\0')
	{
		_puts_recursion(s);

	}
	else
	{
		_putchar('\n');
		return;
	}
		
}

