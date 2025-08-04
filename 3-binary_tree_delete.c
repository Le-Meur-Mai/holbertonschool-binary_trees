#include "binary_trees.h"
/**
 * binary_tree_delete- delete and free the allocated space of a binary tree
 * @tree: The binary tree you want to delete
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
