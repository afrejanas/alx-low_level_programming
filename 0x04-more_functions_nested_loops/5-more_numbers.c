#include<stdio.h>
#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: 0.
 */
void more_numbers(void)
{
	int i = 0;
	int c = 10;

	while (c--)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			else
				_putchar(i + '0');
		}
		_putchar('\n');
	}
}
