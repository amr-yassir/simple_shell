#include "shell.h"

/**
 * _strchr - detect the first occur
 *
 * @s: input
 * @c: input
 *
 * Return: a
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}

/**
 * _strncpy - copy string
 *
 * @dest: input
 * @src: input
 * @n: input
 *
 * Return: @dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

/**
 * _strncat - merge two strings
 *
 * @dest: input
 * @src: input
 * @n: input
 *
 * Return: @dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int l = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[l + i] = src[i];
	dest[l + i] = '\0';

	return (dest);
}
