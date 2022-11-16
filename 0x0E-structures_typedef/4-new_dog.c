#include <stdlib.h>
#include "dog.h"

int _strLen(char *str);
void fillMem(char *str, int strLen, char *dest);

/**
* new_dog - creates a new dog
*
* @name: the name of dog
* @age: the ge of dog
* @owner: Owner of dog
*
* Return: a newly created dog pointer or NULL
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int nameLen, ownerLen;

	n_dog = malloc(sizeof(dog_t));

	if (n_dog == NULL)
		return (NULL);

	namelen = _strlen(name);
	n_dog->name = malloc(sizeof(char) * namelen + 1);

	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}

	fillMem(name, namelen, n_dog->name);

	ownerlen = _strlen(owner);
	n_dog->owner = malloc(sizeof(char) * ownerlen + 1);

	if (n_dog->owner == NULL)
	{
		free(n_dog);
		free(n_dog->name);
		return (NULL);
	}

	fillMem(owner, ownerlen, n_dog->owner);

	n_dog->age = age;

	return (n_dog);
}

/**
* _strlen - length of a string
*
* @str: string pointer
*
* Return: length of string
*/

int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;

	return (i);
}

/**
* fillMem - Copy string literal to allocated memory
*
* @str: String literal
*
* @strlen: @str pointer length
*
* @dest: The allocated memory
*/

void fillMem(char *str, int strlen, char *dest)
{
	int i;

	for (i = 0; i < strlen; i++)
		dest[i] = str[i];

	dest[i] = '\0';
}
