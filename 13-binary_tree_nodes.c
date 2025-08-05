#include "binary_trees.h"

/**
 * binary_tree_nodes- Calculate the number of nodes that do have at least one
 * child in a binary tree.
 * @tree: Pointer to the node of a tree you want to know the number of nodes
 * that have at least one child in a binary tree.
 * Return: The number of nodes that have at least one child in a binary tree.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count_r, count_l = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		if (tree->left != NULL && tree->parent == NULL)
			count_l = binary_tree_nodes(tree->left);
		if (tree->left != NULL && tree->parent != NULL)
			count_l = binary_tree_nodes(tree->left) + 1;
		if (tree->right != NULL)
			count_r = binary_tree_nodes(tree->right) + 1;
	}
	else
		return (0);

	return (count_r + count_l);
}
