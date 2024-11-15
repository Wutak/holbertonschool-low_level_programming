#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - dog
 * @d: pointer
 * @name: name
 * @age: age
 * @owner: owner
 * Return: 1
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
