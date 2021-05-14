#ifndef SEARCH_H
#define SEARCH_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct skiplist_s - doc
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: doc
 *
 * Description: doc
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

skiplist_t *linear_skip(skiplist_t *list, int value);

#endif /* SEARCH_H */
