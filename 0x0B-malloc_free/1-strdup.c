#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: string
 * Return: a pointer to a new string which is a duplicate of the string
 * str, NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, j;
