#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *new_dog - .
 *@name: ..
 *@age: ...
 *@owner: .
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *a;

	a = malloc(sizeof(dog_t));

	if (a == NULL)
	{
		return (NULL);
	}

	a->name = malloc(sizeof(name) * strlen(name));
	if (a->name == NULL)
	{
		free(a);
		return (NULL);
	}
	a->owner = malloc(sizeof(owner) * strlen(owner));
	if (a->owner == NULL)
	{
		free(a->name);
		free(a);
		return (NULL);
	}
	else
	{
		strcpy(a->name, name);
		a->age = age;
		strcpy(a->owner, owner);
	}
	return (a);
}
