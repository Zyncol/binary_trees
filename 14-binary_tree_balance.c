#include "binary_trees.h"
/**
*binary_tree_balance - measures the balancinf factor
*@tree: pointer to the root node of the tree
* Return: the balance factor
*0 if tree is NULL
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left, height_right;

	if (!tree)
		return (0);

	height_left = tree->left ? (int)binary_tree_height(tree->left) : -1;
	height_right = tree->right ? (int)binary_tree_height(tree->right) : -1;

	return (height_left - height_right);
}
/**
*binary_tree_height - it measures the height of a tree
*@tree: a tree to measure the height
*Return: the tree
*0 if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (!tree)
		return (0);

	height_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_left > height_right ? height_left : height_right);
}
