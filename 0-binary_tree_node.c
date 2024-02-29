#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: The parent node of the new binary tree node.
 * @value: The value of the new binary tree node.
 *
 * Return: A pointer to the created node, otherwise NULL.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *the_node = NULL;

	the_node = malloc(sizeof(binary_tree_t));
	if (the_node != NULL)
	{
		the_node->left = NULL;
		the_node->right = NULL;
		the_node->parent = parent;
		the_node->n = value;
	}
	return (the_node);
}
