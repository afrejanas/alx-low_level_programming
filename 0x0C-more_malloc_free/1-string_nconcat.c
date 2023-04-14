#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - check the code
 * @s1: first string
 * @s2: second string
 * @n: number of bytes inputed
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;
	char *str;

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;
	if (n >= len2)
	{
		str = (char *)malloc(sizeof(char) * len1 + len2);
	}
	else
	{
		str = (char *)malloc(sizeof(char) * len1 + n);
		len2 = n;
	}
	if (str == NULL)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = ' ';
	for (j = 0; j < len2; j++)
	{
		str[i++] = s2[j];
	}
	if (len2 == n)
		str[i + 1] = '\0';
	else
		str[i] = '\0';

	return (str);
}
