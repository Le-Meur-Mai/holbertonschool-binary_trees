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
/**
 * binary_tree_traverse- Determine if a binary have the same number of nodes on
 * each side.
 * @tree: the node in the binary tree you want to check.
 * Return: 0 if it doesn't have the same number of nodes on each side, 1 if it
 * does.
 */

int binary_tree_traverse(const binary_tree_t *tree)
{
	int left_side = 0;
	int right_side = 0;

	if (tree == NULL)
		return (0);

	left_side = binary_tree_traverse(tree->left) + 1;
	right_side = binary_tree_traverse(tree->right) + 1;

	return (left_side + right_side);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: @tree: pointer to the root node of the tree to check
 * Return: 1 if the tree if perfect, 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result = 0;
	int result_2 = 0;

	if (tree == NULL)
		return (0);

	result = binary_tree_balance(tree);
	if (result != 0)
		return (0);

	result = binary_tree_is_full(tree);
	if (result != 1)
		return (0);

	result = binary_tree_traverse(tree->left);
	result_2 = binary_tree_traverse(tree->right);
	if (result != result_2)
		return (0);
	return (1);
}
