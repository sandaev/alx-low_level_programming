#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 *
 * @d: Pointer to struct
 * @name: Name
 * @age: Age
 * @owner: Owner
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
