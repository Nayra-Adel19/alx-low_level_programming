#ifndef DOG_H
#define DOG_H


/**
 * struct dog -> A new type "struct dog"
 *
 *@name: The type = char *
 *
 *@age: The type = float
 *@owner: The type = char *
 *
 *Description: It's just alone dog struct in a big cute world
 */

struct dog
{

	char *name;

	float age;

	char *owner;

};

typedef struct dog dog_t;

/* ALL Prototype */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
