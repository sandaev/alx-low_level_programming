#ifndef MAIN_H
#define MAIN_H
/**
 * struct dog - Defines a dog
 * @name: Dog name
 * @age: Dog age
 * @owner: Owner's name
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* MAIN_H */
