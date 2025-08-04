#include "binary_trees.h"

/**
 * binary_tree_node - Create a node in a binary tree
 * @parent: Pointer to the parent of the new node.
 * @value: Integer to include in the new node
 * Return: A pointer to the nex node or NULL if the function failed
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;

	return (new_node);
}
