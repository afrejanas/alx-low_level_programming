#include"function_pointers.h"
/**
 *print_name - Entry Point
 *@name: person's name
 *@f: pointer to a function
 *Return: Success
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
