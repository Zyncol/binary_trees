#include "binary_trees.h"
/**
*binary_tree_sibling - finds something
*@node: pointer to the node
*Return: pointer to sibling node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
return (NULL);
if (node == node->parent->right)
return (node->parent->left);
return (node->parent->right);
}
