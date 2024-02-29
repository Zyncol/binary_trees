#include "binary_trees.h"
#include <stddef.h>
/**
*binary_tree_depth - it measure the depth of a binary tree
*@tree: is a pointer to the node to measure the depth
*Return: If tree is NULL, your function must return 0
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t dp = 0;
	binary_tree_t *nodee = NULL;

	if (tree != NULL)
	{
		nodee = tree->parent;
		do {
			dp++;
			nodee = nodee->parent;
		} while (nodee != NULL);
	}
	return (dp);
}
