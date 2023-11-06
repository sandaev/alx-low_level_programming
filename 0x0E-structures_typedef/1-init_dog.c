#include "dog.h"

/**
 * init_dog - Initializes variable of
 * type struct dog
 * @d: struct dog varaiable
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
