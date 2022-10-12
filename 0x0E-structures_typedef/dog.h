#ifndef dog
/**
 * struct dog - Structure for basic dog feartures
 *
 * @name: Name
 *
 * @age: Age
 *
 * @owner: Owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif /* ifndef */
