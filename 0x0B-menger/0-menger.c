#include "menger.h"

/**
 * menger - 2D Menger Sponge
 * @level: leve of Menger to print
 * Return: void
 */

void menger(int level)
{
	int ax, ay, d, dim = 1;

	if (level >= 0)
	{
		for (ax = 0; ax < level; ax++)
		{
			dim *= 3;
		}

		for (ax = 0; ax < dim; ax++)
		{
			for (ay = 0; ay < dim; ay++)
			{
				for (d = dim / 3; d > 0; d /= 3)
				{
					if ((ax % (d * 3)) / d == 1 && (ay % (d * 3)) / d == 1)
						break;
				}
				if (d)
				{
					printf(" ");
				} else
				{
					printf("#");
				}
			}
			printf("\n");
		}
	}
}
