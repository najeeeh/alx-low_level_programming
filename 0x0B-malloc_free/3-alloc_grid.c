#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the grid
 * @height: height of the grid
 * Return: a pointer to a 2 dimensional array of integers,
 * NULL on failure or if width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;
