#include "binary_trees.h"
/**
*binary_tree_height - a function that measures
*the height of a binary tree
*@tree: is a pointer to the root node of the tree to measure the height
*return: If tree is NULL, your function must return 0
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hght_le = 0;
	size_t hght_ri = 0;
	if (!tree)
		return (0);
	hght_le = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	hght_ri = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (hght_le > hght_ri ? hght_le : hght_ri);
}
