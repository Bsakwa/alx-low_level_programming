#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Returns a pointer to a 2 dimensional array
 * @width: The width of the two dimensional array
 * @height: The height of the two dimensional array
 *
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **twodim;
	int hgt, widt;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	twodim = malloc(sizeof(int *) * height);

	if (twodim == NULL)
	{
		return (NULL);
	}
	for (hgt = 0; hgt < height; hgt++)
	{
		twodim[hgt] = malloc(sizeof(int) * width);
	}
	for (hgt = 0; hgt < height; hgt++)
	{
		for (widt = 0; widt < width; widt++)
		{
			twodim[hgt][widt] = 0;
		}
	}
	return (twodim);
}
