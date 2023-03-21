#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize the dog struct
 *
 * @d: input ptr to struct dog
 * @name: Dog's name input
 * @age: Dog's age input
 * @owner: Dog's owner input
 *
 * Return: nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
