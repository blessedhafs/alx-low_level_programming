#include "function_pointers.h"

/**
 * int_index - earces for an integer
 * @array: array to sear in
 * @size: size of the array
 * @cmp: pointer
 *
 * Return: index of the first element for which
 * the cmp function does return 0, or -1 if no match is found
 * or size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0, i < size, i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1)
}
