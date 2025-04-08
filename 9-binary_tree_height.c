#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node
 *
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t heightLeft = 0;
	size_t heightRight = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	/* Counting height of each child */
	heightLeft += binary_tree_height(tree->left);
	heightRight += binary_tree_height(tree->right);

	/* Returning only the highest */
	if (heightLeft > heightRight)
		return (heightLeft + 1);
	else
		return (heightRight + 1);
}
