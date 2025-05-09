#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node in a binary tree
 * @node: pointer to the node
 *
 * Return: pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* Checking if node is NULL or the root of the tree */
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	/* Returning the uncle node */
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);
}
