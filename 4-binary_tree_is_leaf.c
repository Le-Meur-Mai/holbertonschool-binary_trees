#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if the node of a binary tree is a leaf
 *
 * @node: node to be checked
 *
 * Return: 1 if the node is a leaf, 0 if not or if the code fails
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
