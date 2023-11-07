#include "dog.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * _len - Return the length of string
 * @str: String
 *
 * Return: Integer
 */
int _len(char *str)
{
	int c = 0;

	while (*str++)
	{
		c++;
	}

	return (c);
}
/**
 * new_dog - defines a new dog
 * @name: Name
 * @age: Age
 * @owner: Owner
 *
 * Return: Pointer to dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *n;
	char *o;
	int x;

	d = malloc(sizeof(dog_t *));

	if (d == NULL || !name || !owner)
		return (NULL);

	x = _len(name);
	n = malloc(x * sizeof(char));
	if (n == NULL)
	{
		free(d);
		return (NULL);
	}
	x = _len(owner);
	o = malloc(x * sizeof(char));
	if (!o)
	{
		free(d);
		free(n);
		return (NULL);
	}
	for (x = 0 ; name[x] != '\0'; x++)
		n[x] = name[x];
	n[x] = '\0';
	for (x = 0; owner[x] != '\0'; x++)
		o[x] = owner[x];
	o[x] = '\0';
	d->name = n;
	d->age = age;
	d->owner = o;

	return (d);
}
