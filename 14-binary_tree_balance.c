#include "binary_trees.h"

/**
 * binary_tree_height2- Calculate the height of a binary tree
 * @tree: node you want to calculate the height of a binary tree
 * Return: The height of a binary tree
 */
int binary_tree_height2(const binary_tree_t *tree)
{
	int height_l = 0;
	int height_r = 0;

	if (tree == NULL)
		return (0);

	height_l = binary_tree_height2(tree->left);

	height_r = binary_tree_height2(tree->right);

	if (height_l > height_r)
		return (height_l + 1);
	else
		return (height_r + 1);
}

/**
 * binary_tree_balance- Measure the balance factor of a binary tree.
 * @tree: node you want to measure the balance in a binary tree.
 * Return: Return the difference of depth between the left and right side of a
 * binary tree.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_l = 0;
	int height_r = 0;

	if (tree == NULL)
		return (0);

	height_l = binary_tree_height2(tree->left);

	height_r = binary_tree_height2(tree->right);

	return (height_l - height_r);
}
