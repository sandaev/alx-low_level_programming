#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints struct dog
 * @d: dog
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			d->name = "(nil)";
		/*
		 * if (!(d->age))
			d->age = (float)"(nil)";
			*/
		if (!(d->owner))
			d->owner = "(nil)";
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
