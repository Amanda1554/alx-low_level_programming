#include "dog.h"
#include <stdlib.h>

/**
  * new_dog - creates a new dog
  * @name: the dog's name
  * @age: the dog's age
  * @owner: the owner of the dog
  * Return: 0 otherwise NULL if unsuccessful
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int length1;
	int length2;
	int i;

	length1 = 0;
	length2 = 0;
	while (name[length1++])
		;
	while (owner[length2++])
		;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(d->name) * length1);
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; i < length1; i++)
		d->name[i] = name[i];

	d->age = age;

	d->owner = malloc(sizeof(d->owner) * length2);
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; i < length2; i++)
		d->owner[i] = owner[i];
	return (d);
}
