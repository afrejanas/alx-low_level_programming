#include"main.h"
/**
 * get_bit - value of a bit at a given index
 * @n: decimal parameter
 * @index: index
 * Return: val
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int a = 1;
	unsigned long int p;

	p = (a << index & n);
	if (p >> index)
		return (1);
	else
		return (0);

	if (index > 32)
		return (-1);

}

