#include<stdio.h>
/**
 * main - Prints the numbers from 0-9.
(*
 * Return: 0 on success
 */
int main(void)
{
	int i = 0;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
