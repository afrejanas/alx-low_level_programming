#include<stdlib.h>
#include<stdio.h>
#include"dog.h"
/**
 * print_dog - Prints all the data of a dog
 * @d: A dog structure
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("name: %s\n", "(nil)");
		else
			printf("name: %s\n", d->name);
		if (d->age == 0)
			printf("age: %s\n", "(nil)");
		else
			printf("age: %f\n", d->age);
		if (d->owner == NULL)
			printf("owner: %s\n", "(nil)");
		else
			printf("owner: %s\n", d->owner);
	}

}
