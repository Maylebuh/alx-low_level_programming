#include "main.h"

/**
 * get_endianness - prints the value of an index
 * Return: 0 index, 1 value
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
