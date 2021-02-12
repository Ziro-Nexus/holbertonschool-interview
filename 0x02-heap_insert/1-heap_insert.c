#include "binary_trees.h"

size_t h_size(heap_t *root);
heap_t *start_heap(heap_t *node);

/**
 * h_size - doc
 * @root: doc
 * Return: doc
 */
size_t h_size(heap_t *root)
{
	if (root == NULL)
		return (0);
	return (1 + h_size(root->left) + h_size(root->right));
}

/**
 * heap_insert - doc
 * @root: doc
 * @value: doc
 * Return: doc
 */
heap_t *heap_insert(heap_t **root, int value)
{
	ssize_t n = h_size(*root) + 1;
	int val = 0;
	heap_t *node = *root, *new_node;

	new_node = binary_tree_node(node, value);
	if (!new_node)
		return (NULL);
	if (!*root)
		return (*root = new_node);
	for (; 1 << (val + 1) <= n; val++)
		;
	for (val--; val > 0; val--)
	{
		if (n & (1 << val))
			node = node->right;
		else
			node = node->left;
	}
	if (n & 1)
		node->right = new_node;
	else
		node->left = new_node;
	new_node->parent = node;
	return (start_heap(new_node));
}

/**
 * start_heap - doc
 * @node: doc
 * Return: doc
 */
heap_t *start_heap(heap_t *node)
{
	while (node && node->parent && node->n > node->parent->n)
	{
		node->parent->n -= node->n;
		node->n = node->parent->n + node->n;
		node->parent->n = node->n - node->parent->n;
		node = node->parent;
	}
	return (node);
}
