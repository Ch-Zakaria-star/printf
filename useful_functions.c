#include "main.h"

/**
 * _position - position on string
 * @s: string
 * @n: integer
 * Return: 0
 */

int _position(const char *s, int n)
{
	int index;

	index = 0;

	while (*s)
	{
		if (s[n + 1] != ' ')
		{
			return (index);
		}
		n++;
		index++;
	}
	return (0);
}

/**
 * _strlen - string length
 * @s: string
 * Return: i
 */

int _strlen(char *s)
{
	int index;

	index = 0;
	while (s[index] != '\0')
	{
		index++;
	}
	return (index);
}

/**
 * _strcat - concatenates two strings
 * @dest: char pointer
 * @src: char pointer
 * @n: int
 * Return: dest
 */
char *_strcat(char *dest, char *src, int n)
{
	int index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[n + index] = src[index];
		index++;
	}
	return (dest);
}

/**
 * _abs - absolute
 * @n: int
 * Return: n
 */

int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}

/**
 * _numlen - length of number
 * @n: int
 * Return: len
 */

int _numlen(int n)
{
	int len = 0;

	while (n / 10 != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

/**
 * rev_string - reverses a string.
 * @s: String to reverse
 * Return: void.
 */

void *rev_string(char *s)
{
	int index = 0;
	int aux = 0;
	char ltemp;

	while (*(s + index) != '\0')
		index += 1;
	index -= 1;

	while (aux < index)
	{
		ltemp = s[index];
		s[index] = s[aux];
		s[aux] = ltemp;
		aux++;
		index--;
	}
	return (s);
}
