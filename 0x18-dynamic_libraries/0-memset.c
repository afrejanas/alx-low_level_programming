#include<stdio.h>
#include"main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s:  area s
 * @n: bytes of the memory area pointed to by s
 * @b: constant byte b
 * Return: new string.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
