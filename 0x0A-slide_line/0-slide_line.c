#include "slide_line.h"

int slide_line(int *line, size_t size, int direction)
{
	int *place = NULL;
	int *left = NULL;
	int *right = NULL;

	if (direction == SLIDE_LEFT)
	{
		place = line;
		left = place;

		while (left < line + (size - 1))
		{
			while (*left == 0 && left < line + (size - 1))
			{
				left++;
			}
			right = left + 1;
			while (right < line + (size))
			{
				if (*right == *left)
				{
					*place = *left * 2;
					if (place != left)
					{
						*left = 0;
					}
					*right = 0;
					place++;
					break;
				}
				else
				{
					right++;
				}
			}
			left++;
		}
		if (*(line + size - 1) && !*place)
		{
			*place = *(line + size - 1);
			*(line + size - 1) = 0;
		}
	}
	return (1);
}
