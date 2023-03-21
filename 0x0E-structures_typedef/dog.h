#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Struct dog
 * @name: Name
 * @age: Age
 * @owner:  Owner
 * Description: This is dog's Struct 
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
