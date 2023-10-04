#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: string one
 * @s2: string to append to string one
 * Return: pointer to a newely allocated space in memory
 * which contains s1 followed by s2 and null terminator or,
 * NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
