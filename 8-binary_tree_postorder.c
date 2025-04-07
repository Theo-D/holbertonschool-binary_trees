#include "binary_trees.h"
/**
 * binary_tree_postorder - goes through a binary tree using post-order
 * traversal
 * @tree: pointer to the root node of the tree to traverse.
 * @func: Pointer to function that prints data within the node.
 *
 * Return: nothing.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL)
	{
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
		func(tree->n);
	}
}


