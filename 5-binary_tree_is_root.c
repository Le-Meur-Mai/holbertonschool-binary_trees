#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if the node of a binary tree is a root
 *
 * @node: node to be checked
 *
 * Return: 1 if the node is a root, 0 if not or if the code fails
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
