#include<stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0.
 */
int main(void)
{
	int i;

	for (i =1; i <=100; i++)
	{
		
			if (!(i % 3 == 0 || i % 5 == 0) && i >=10)
			{	
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(' ');
			}
			else if ((!(i % 3 == 0 || i % 5 == 0) && i < 10))
			{
				putchar(i + '0');
				putchar(' ');
			}
			else if (i % 3 == 0 )
			{
				putchar('F');
				putchar('i');
				putchar('z');
				putchar('z');
				putchar(' ');
			}
			else
			{
				putchar('B');
				putchar('u');
				putchar('z');
				putchar('z');
				putchar(' ');
			}
		
	}
	putchar('\n');
	return (0);
}
