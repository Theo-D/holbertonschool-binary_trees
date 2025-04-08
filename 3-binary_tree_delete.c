#include "binary_trees.h"

/**
 * binary_tree_delete - deletes a binary tree
 * @tree: root of the tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		/* Deleting the left child if existing with recursion */
		if (tree->left != NULL)
		{
			binary_tree_delete(tree->left);
			tree->left = NULL;
		}

		/* Deleting the right child if existing with recursion */
		if (tree->right != NULL)
		{
			binary_tree_delete(tree->right);
			tree->right = NULL;
		}

		/* Freeing the node */
		free(tree);
	}
}
