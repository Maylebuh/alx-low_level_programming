#include "main.h"

/**
 * get_bit - prints the value of an index in a decimal digit
 * @n: digit to search
 * @index: index of th value
 * Return: value of the index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);
	bit_val = (n >> index) & 1;
	return (bit_val);
}
