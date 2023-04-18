#include <stdlib.h>
#include "dog.h"
/**
 * _strcpy -  copies the string from src to dest
 * @dest: pointer to the buffer.
 * @src: string to be copied.
 * Return: The pointer to the dest.
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
/**
 * _strlen - len of string
 * @s: string
 * Return: len of string
 */
int _strlen(char *s)
{
	int i;

	if (!s)
		return (0);
	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * new_dog -  creates a new dog.
 * @name: dog name
 * @age: dogage
 * @owner: dog owner
 * Return: pointer to the new dog if no error otherwise NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	if (name != NULL && owner != NULL)
	{
		newDog = malloc(sizeof(dog_t));

		if (newDog == NULL)
			return (NULL);
		newDog->name = malloc(sizeof(char) * (_strlen(name) + 1));
		if (newDog->name == NULL)
		{
			free(newDog);
			return (NULL);
		}
		newDog->name = _strcpy(newDog->name, name);
		newDog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
		if (newDog->owner == NULL)
		{
			free(newDog->name);
			free(newDog);
			return (NULL);
		}
		newDog->owner = _strcpy(newDog->owner, owner);
		newDog->age = age;
	}
	return (newDog);
}
