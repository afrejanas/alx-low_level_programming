#include"main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: parameter
 */
void print_binary(unsigned long int n)
{
	unsigned long int p;
	int i, a = 1, b;
	int flag = 0;

	if (n == 0)
		_putchar('0');

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & n);
		if (p >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
		}
	}
}
