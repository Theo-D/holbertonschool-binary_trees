#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if the given node is the root of the tree
 * @node: node to check
 *
 * Return: 1 if node is the root ; 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	/* Checking if node is the root */
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
