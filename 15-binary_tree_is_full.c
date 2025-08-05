#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if the tree if full, 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int result_l = 0;
	int result_r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else if (tree->left != NULL && tree->right != NULL)
	{
		result_l = binary_tree_is_full(tree->left);
		if (result_l != 1)
			return (0);
		result_r = binary_tree_is_full(tree->right);
		if (result_r != 1)
			return (0);
	}
	return (result_l);
}
