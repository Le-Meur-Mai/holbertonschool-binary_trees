#include "binary_trees.h"
/**
 * binary_tree_height- Calculate the height of a binary tree.
 * @tree: The binary tree you want to calculate the height of.
 * Return: The height of the binary tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		if (tree->left != NULL)
			height_l = binary_tree_height(tree->left);
		else
			height_l = 0;
		if (tree->right != NULL)
			height_r = binary_tree_height(tree->right);
		else
			height_r = 0;

		if (height_l > height_r)
			return (height_l + 1);
		else
			return (height_r + 1);
	}
	else
		return (0);
}
