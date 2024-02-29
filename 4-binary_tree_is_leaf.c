#include "binary_trees.h"
/**
* binary_tree_is_leaf - checks if a node is a leaf
* @node: is a pointer to the node to check
* Return: 1 if node is a leaf,If node is NULL 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int noo = 0;

	if (node != NULL)
	{
		noo = ((node->left == NULL) && (node->right == NULL) ? 1 : 0);
	}
	return (noo);
}
