#include "binary_trees.h"
/**
 * binary_tree_insert_left- Create a new node as the left child of a given node
 * If the given node already has a left child, the new node takes its place and
 * the old left child, became the left child of the new node.
 * @parent: pointer to the node to insert the left-child in.
 * @value: Integer to include in the new node.
 * Return: the pointer to the new node and NULL if the function fails
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)

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
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;

	return (new_node);
}
