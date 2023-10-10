#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog's owner
 *
 * Description: long dog struct
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
typedef struct dog dog_t;
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
