#include"main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: parameter
 */
void print_binary(unsigned long int n)
{
	unsigned long int p, b;
	int i, a = 1, c = 0;
	int flag = 0;


	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & n);
		if (p >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			c++;
		}
	}
	if (c == 0)
	{
		_putchar('0');
	}

}
