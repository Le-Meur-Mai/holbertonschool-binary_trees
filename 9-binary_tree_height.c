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
		return (-1);


	height_l = binary_tree_height(tree->left) + 1;
	height_r = binary_tree_height(tree->right) + 1;

	if (height_l > height_r)
		return (height_l);
	else
		return (height_r);
}
