#include "binary_trees.h"

/**
 * binary_tree_size- Give the size of a tree from a given node of a binary tree
 * @tree: node you want the size of, in a binary tree
 * Return: The size of a node in a binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_l = 0;
	size_t size_r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		size_l = binary_tree_size(tree->left);
	else
		size_l = 0;
	if (tree->right != NULL)
		size_r = binary_tree_size(tree->right);
	else
		size_r = 0;

	return (size_l + size_r + 1);
}
