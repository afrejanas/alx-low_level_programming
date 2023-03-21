#include "main.h"

/**
 * print_alphabet_x10 - a function that prints the alphabet 10 timese
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet_x10(void)
{
	int n, i;

	for (i = 0; i <= 9; i++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
