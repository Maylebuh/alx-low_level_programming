#include "main.h"

/**
 * set_bit - prints the value of a given index to 1
 * @n: number of the value to  change
 * @index: index of the value to set to 1
 * Return: 1 for success, -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
