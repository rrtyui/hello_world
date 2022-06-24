#include <stdlib.h>
#include "main.h"
/*
* alloc_grid  - return an array using malloc
* @width: parameterer
* @height: parametrer
* Return: null if its 0 and pointer if its succes
*/

int **alloc_grid(int width, int height)
{
	int **twoD;

	int hight_i;

	int width_i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	twoD = malloc(sizeof(int) * height);

	if (twoD == NULL)
	{
		return (NULL);
	}

	for (hight_i = 0; hight_i < height; hight_i++)
	{
		twoD[hight_i] = malloc(sizeof(int) * width);

		if (twoD[hight_i] == NULL)
		{
			for (; hight_i>= 0; hight_i--)
				free(twoD[hight_i]);

			free(twoD);
			return (NULL);
		}
	}

	for (hight_i = 0; hight_i < height; hight_i++)
	{
		for (width_i = 0; width_i < width; width_i++)
			twoD[hight_i][width_i] = 0;
	}

	return (twoD);
}
}
