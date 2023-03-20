#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: its name
 * @age: its age
 * @owner: its owner
 * Return: struct dog
 * if function fails, return NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *s_dog;
	int i, sname, sowner;

	s_dog = malloc(sizeof(*s_dog));

	if (s_dog == NULL || !(name) || !(owner))
	{
		free(s_dog);
		return (NULL);
	}
	for (sname = 0; name[sname]; sname++)
		;
	for (sowner = 0; owner[sowner]; sowner++)
		;

	s_dog->name = malloc(sname + 1);
	s_dog->owner = malloc(sowner + 1);

	if (!(s_dog->name) || !(s_dog->owner))
	{
		free(s_dog->owner);
		free(s_dog->name);
		free(s_dog);
		return (NULL);
	}

	for (i = 0; i < sname; i++)
		s_dog->name[i] = name[i];
	s_dog->name[i] = '\0';

	s_dog->age = age;

	for (i = 0; i < sowner; i++)
		s_dog->owner[i] = owner[i];
	s_dog->owner[i] = '\0';

	return (s_dog);
}
