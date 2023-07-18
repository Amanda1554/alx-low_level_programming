#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * print_dog - prints struct dog
  * @d: pointer to dog structure
  */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
