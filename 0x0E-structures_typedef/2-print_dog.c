#include<stdlib.h>
#include<stdio.h>
#include"dog.h"

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("name: %s\n", "(nil)");
		else
			printf("%s\n",d->name);
		if (d->age == 0)
			printf("name: %s\n", "(nil)");
		else
			printf("%f\n",d->age);
		if (d->owner == NULL)
			printf("name: %s\n", "(nil)");
		else
			printf("%s\n",d->owner);
	}

}
