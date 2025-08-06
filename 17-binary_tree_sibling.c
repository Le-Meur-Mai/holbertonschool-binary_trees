#include "binary_trees.h"
/**
 * binary_tree_sibling- Found the sibling of a node in a binary tree.
 * @node: node you want to know the sibling.
 * Return: A pointer to the sibling node or NULL if it doesn't have one.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
	{
		if (node->parent->right != NULL)
			return (node->parent->right);
	}
	else if (node == node->parent->right)
	{
		if (node->parent->left != NULL)
			return (node->parent->left);
	}
	return (NULL);
}
