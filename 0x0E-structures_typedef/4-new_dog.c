#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 *
 * @name: name
 *
 * @age: Age of dog
 *
 * @owner: Owner of dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dptr;

	dptr = malloc(sizeof(dog_t));
	if (dptr == NULL)
	{
		return (NULL);
	}
	dptr->name = name;
	dptr->age = age;
	dptr->owner = owner;
	return (dptr);
}
