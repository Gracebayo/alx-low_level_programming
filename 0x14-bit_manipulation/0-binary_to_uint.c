#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: Pointing to a string
 *
 * Return: The converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int bin = 0;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		bin = 2 * bin + (b[a] - '0');
	}

	return (bin);
}
