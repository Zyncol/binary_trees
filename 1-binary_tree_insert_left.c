#include "binary_trees.h"

/**
* binary_tree_insert_left - Inserts a node to the left 
* @parent: the parent node of binary tree
* @value: is the value to store in the new node 
* Return: a pointer to node otherwise return NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *the_nodee = NULL;

	if (parent != NULL)
	{
		the_nodee = malloc(sizeof(binary_tree_t));
		if (the_nodee != NULL)
		{
			the_nodee->left = parent->left;
			the_nodee->right = NULL;
			the_nodee->parent = parent;
			the_nodee->n = value;
			if (parent->left != NULL)
			{
				parent->left->parent = the_nodee;
			}
			parent->left = the_nodee;
		}
	}
	return (the_nodee);
}
