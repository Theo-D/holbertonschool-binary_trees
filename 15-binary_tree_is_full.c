#include "binary_trees.h"
/**
 * binary_tree_is_full - Checks if a tree is full.
 * @tree: Pointer to the first node of the tree to be checked.
 *
 * Return: 1 if tree is full. Otherwise returns 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/*An empty tree is a full tree*/
	if (tree == NULL)
		return (1);

	/*A tree with only leaves is a full tree*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/**
	 * If left and right nodes are not empty and if left and right nodes are
	 * full the tree is a full tree
	 */
	if (tree->left != NULL && tree->right != NULL)
	{
		if (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right))
			return (1);
	}

	return (0);
}
