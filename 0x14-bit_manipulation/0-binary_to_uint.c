#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decim = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decim = 2 * decim + (b[i] - '0');
	}
	return (decim);
}
