#include<stdio.h>
/**
 * main - Entry point
 *
 * Discription: prints the lowercase letters of the alphabet
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char myChar[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int i = 0;

	for (i = 0; i <= 25; i = i + 1)
	{
		putchar(myChar[i] + 32);
	}
	putchar('\n');
	return (0);
}
