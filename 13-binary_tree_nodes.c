#include "binary_trees.h"
/**
*binary_tree_nodes - counts nodes
*@tree: the tree
*Return: the number
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t cou = 0;

if (tree == NULL)
return (0);
if (tree->right != NULL || tree->left != NULL)
cou += binary_tree_nodes(tree->left) + 1
+ binary_tree_nodes(tree->right);
return (cou);
}
