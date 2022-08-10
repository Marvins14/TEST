#include "main.h"
/**
 * _strcopy - function that copies
 * the string pointed to by src
 * @dest: to be copied to
 * @src: to be copied from
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; src[i] == '\0'; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
