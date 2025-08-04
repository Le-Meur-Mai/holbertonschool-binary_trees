#include "binary_trees.h"
/**
 * binary_tree_postorder- Traverse a binary tree in postorder.
 * @tree: The root node of the tree to traverse
 * @func: Function to execute on each node traversed
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
