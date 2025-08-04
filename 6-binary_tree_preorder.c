#include "binary_trees.h"
/**
 * binary_tree_preorder- Traverse a binary tree in preorder.
 * @tree: The root node of the tree to traverse
 * @func: Function to execute on each node traversed
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);

}
