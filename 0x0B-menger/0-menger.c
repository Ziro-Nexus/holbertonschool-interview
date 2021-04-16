#include "menger.h"

/**
 * menger - 2D Menger Sponge
 * @level: leve of Menger to print
 * Return: void
 */

void menger(int level)
{
	int X, Y, d, x = 1;

	if (level >= 0)
	{
		for (X = 0; X < level; X++)
		{
			x *= 3;
		}

		for (X = 0; X < x; X++)
		{
			for (Y = 0; Y < x; Y++)
			{
				for (d = x / 3; d > 0; d /= 3)
				{
					if ((X % (d * 3)) / d == 1 && (Y % (d * 3)) / d == 1)
						break;
				}
				if (d)
				{
					putchar(' ');
				} else
				{
					putchar('#');
				}
			}
			printf("\n");
		}
	}
}
