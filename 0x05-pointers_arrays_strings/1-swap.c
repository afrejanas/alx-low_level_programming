#include<stdio.h>
#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a:integer
 * @b:integer
 * Return : 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
