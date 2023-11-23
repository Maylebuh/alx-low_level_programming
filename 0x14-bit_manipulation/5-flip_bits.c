#include "main.h"

/**
 * flip_bits - prints the number ofvalue to change
 * to get from one digit to another
 * @n: first digit
 * @m: second digit
 * Return: number of value to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}
	return (count);
}
