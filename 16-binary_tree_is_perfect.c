#include "binary_trees.h"
/**
*binary_tree_height - Gives the size of a (sub)tree
*@tree: SE
*Return: New node
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	int l, r;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	l = 1 + binary_tree_height(tree->left);
	r = 1 + binary_tree_height(tree->right);
	if (l > r)
		return (l);
	return (r);
}
/**
*binary_tree_is_perfect - Checks whether a tree is perfect
*@tree: SE
*Return: 1 if true or 0 is false
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l, r, l_height, r_height;

	if (!tree)
		return (0);
	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);
	if (l_height != r_height)
		return (0);
	if ((!tree->left && tree->right) || (!tree->right && tree->left))
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	l = binary_tree_is_perfect(tree->left);
	r = binary_tree_is_perfect(tree->right);
	if (l == 1 && r == 1)
		return (1);
	return (0);
}
