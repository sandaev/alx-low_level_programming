#ifndef MAIN_H
#define MAIN_H
/**
 * struct dog - Defines a dog
 * @name: Dog name
 * @age: Dog age
 * @owner: Owner's name
 *
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* MAIN_H */
