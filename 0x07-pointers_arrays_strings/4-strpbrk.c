#include "main.h"

/**
 * _strpbrk - locates the first occurrence of any set of bytes in the string s
 * @s: string searched
 * @accept: string where search bytes are located
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}

	return ('\0');
}
