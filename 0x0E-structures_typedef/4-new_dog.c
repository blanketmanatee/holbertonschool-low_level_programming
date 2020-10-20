#include "dog.h"

/**
 * _strlen - string len
 * @s: input str
 * Return: string len
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;

	return (c);
}

/**
 * _strcpy - copies string including null byte
 * @dest: destination
 * @src: string to be copied
 * Return: des
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*src != '\0')
	{
		*(dest + i) = *(src);
		i++;
		src++;
	}
	*(dest + 1) = '\0';
	return (dest);
}

/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: a dog_t or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int lenname, lenowner;
	dog_t *d;

	lenname = _strlen(name);
	lenowner = _strlen(owner);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * (lenname + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * (lenowner + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	_strcpy(d->name, name);
	_strcpy(d->owner, owner);
	d->age = age;
	return (d);
}
