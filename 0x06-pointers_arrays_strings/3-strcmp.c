/**
 * _strcmp - compares two strings
 * @s1: First string
 * @s2: Second string
 * Return: difference in bytes
 */

int _strcmp(char *s1, char *s2)
{
	char result = 0;

	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	result = *s1 - *s2;
	return (result);
}
