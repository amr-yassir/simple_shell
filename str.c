#include "shell.h"

/**
 * _strlen - calculate length
 * @s: check input
 * Return: length
 */
int _strlen(char *s)
{
	int l;

	for (l = 0; *s != '\0'; s++)
		l++;

	return (l);
}

/**
 * *_strcat - function to merge two strings
 * @dest: input
 * @src: input
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int c, c1;

	c = 0;
	while (dest[c])
		c++;
	for (c1 = 0; src[c1]; c1++)
		dest[c++] = src[c1];
	return (dest);
}

/**
 * _strcmp - compare two strings
 * @s1: input
 * @s2: input
 * Return: 1 if true, 0 if false
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			i = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (i);
}


/**
 * starts_with - checks if needle starts with haystack
 * @haystack: string to search
 * @needle: the substring to find
 * Return: address of next char of haystack or NULL
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}
