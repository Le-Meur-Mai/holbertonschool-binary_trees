#include "binary_trees.h"

/**
 * binary_tree_leaves- Counts the number of leaves in a binary tree
 * @tree: node you want the number of leaves, in a binary tree
 * Return: The number of leaves in a binary tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count_leaf = 0;
	size_t count_l = 0;
	size_t count_r = 0;

	if (tree == NULL)
		return (0);


	if (tree->left != NULL || tree->right != NULL)
	{
		if (tree->left != NULL)
		count_l = binary_tree_leaves(tree->left);
		if (tree->right != NULL)
		count_r = binary_tree_leaves(tree->right);
	}
	else
	{
		count_leaf++;
		return (count_leaf);
	}

	return (count_l + count_r);
}
