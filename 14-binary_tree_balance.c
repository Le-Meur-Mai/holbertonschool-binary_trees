#include "binary_trees.h"

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

	if (tree->left != NULL || tree->right != NULL)
	{
		if (tree->left != NULL)
			height_l = binary_tree_balance(tree->left) + 1;
		else
			height_l = 0;
		if (tree->right != NULL)
			height_r = binary_tree_balance(tree->right) + 1;
		else
			height_r = 0;

		return (height_l - height_r);
	}
	else
		return (0);
}
