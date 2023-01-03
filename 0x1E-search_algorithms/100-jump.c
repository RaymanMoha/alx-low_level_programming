#include "search_algos.h"

/**
  * jump_search - function that searches for a value in a sorted array
  *               of integers using the Jump search algorithm.
  * @array: ptr to the first element of the array to search.
  * @size: no. of elements in the array.
  * @value: the value to search for.
  *
  * Return: the first index where the value is located, or -1 if
  *	the value is not present or the array is NULL.
  *
  * Description: Prints a value every time it is compared in the array.
  *              Uses the sqrt of the array size as the jump step.
  */

int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
