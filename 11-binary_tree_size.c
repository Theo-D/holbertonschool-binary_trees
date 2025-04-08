#include "binary_trees.h"
/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: Pointer to the root of tree to measure.
 *
 * Return: Size of tree, otherwise if function fails, returns 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t treeSize;

	if (tree != NULL)
	{
		treeSize = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);
		return (treeSize);
	}

	return (0);
}
