#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog.
 * @d: pointer to struct type dog
 * @name: pointer to char nme's dog
 * @age: age's dog
 * @owner: pointer to char oner's dog
 * Return: no.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
