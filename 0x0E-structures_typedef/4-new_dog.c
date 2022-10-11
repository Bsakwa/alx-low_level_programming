#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

int _strlen(char *str);
char *_strncopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
/**
 * _strlen - gets the legth of a string
 * @str: The string to get the length from
 *
 * Return: pointer to string
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		str++;
	}
	return (i);
}
/**
 * _strncopy - copies a string pointed to src to a dest buffer
 * @dest: The buffer holding the string copy
 * @src: The source string
 *
 * Return: Pointer to dest.
 */
char *_strncopy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - The dog to be created
 * @name: The name of the new dog
 * @age: The age of the new dog
 * @owner: The owner of the dog
 *
 * Return: The new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		return (NULL);
	}
	newdog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	newdog->name = _strncopy(newdog->name, name);
	newdog->age = age;
	newdog->owner = _strncopy(newdog->owner, owner);
	return (newdog);
}
