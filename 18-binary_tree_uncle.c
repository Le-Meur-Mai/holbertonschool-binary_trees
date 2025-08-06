#include "binary_trees.h"

/**
 * binary_tree_uncle- Found the uncle of a node in a binary tree.
 * @node: node you want to know the uncle.
 * Return: A pointer to the uncle node or NULL if it doesn't have one.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent == node->parent->parent->left)
	{
		if (node->parent->parent->right != NULL)
			return (node->parent->parent->right);
	}
	else if (node->parent == node->parent->parent->right)
	{
		if (node->parent->parent->left != NULL)
			return (node->parent->parent->left);
	}
	return (NULL);
}
