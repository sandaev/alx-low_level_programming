#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structures that defines
 * a dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);

#endif /* DOG_H */
