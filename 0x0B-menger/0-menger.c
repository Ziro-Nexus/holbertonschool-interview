#include "menger.h"

/**
 * menger - 2D Menger Sponge
 * @level: leve of Menger to print
 * Return: void
 */

void menger(int level)
{
	int x, y, d, k = 1;

	if (level >= 0)
	{
		for (x = 0; x < level; x++)
		{
			k *= 3;
		}

		for (x = 0; x < k; x++)
		{
			for (y = 0; y < k; y++)
			{
				for (d = k / 3; d > 0; d /= 3)
				{
					if ((x % (d * 3)) / d == 1 && (y % (d * 3)) / d == 1)
						break;
				}
				if (d)
				{
					putchar(' ');
				} else
				{
					putchar(' ');
				}
			}
			putchar('\n');
		}
	}
}
