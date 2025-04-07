#include "binary_trees.h"

/**
 * binary_tree_node - inserts a node as the left-child of another node
 * @parent: parent node
 * @value: value of the node
 *
 * Return: pointer to the new node or NULL if function fails.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	/*Checks if parent exists*/
	if (parent == NULL)
		return (NULL);

	/* Allocating memory for the new node */
	new = malloc(sizeof(binary_tree_t));

	/* Checking for malloc failure */
	if (new == NULL)
		return (NULL);

	/* Setting the new node values */
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	/*Updating left child*/
	if (parent->left != NULL)
	{
		parent->left->parent = new;
		new->left = parent->left;
	}
	parent->left = new;

	return (new);
}
