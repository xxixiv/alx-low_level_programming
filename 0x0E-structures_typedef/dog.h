#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_t - Typedef struct of a dog
 */
typedef struct dog dog_t;

/**
 * struct dog - it stores the dog's data
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
