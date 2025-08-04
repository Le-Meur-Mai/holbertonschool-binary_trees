#include "binary_trees.h"

/**
 * binary_tree_insert_right- Create a new node as the right child of a given
 * node. If the given node already has a right child, the new node takes its
 * place and the old right child, became the right child of the new node.
 * @parent: pointer to the node to insert the right-child in.
 * @value: Integer to include in the new node.
 * Return: the pointer to the new node and NULL if the function fails.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
