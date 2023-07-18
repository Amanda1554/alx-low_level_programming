#ifndef DOG_H
#define DOG_H

/**
  * struct dog - new structure type
  * @name: the dog's name
  * @age: the dog's age
  * @owner: the owner of the dog
  * Return: nothing
  */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

int _putchar(char c);
#endif
