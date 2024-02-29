#include "binary_trees.h"

/**
*binary_tree_insert_right - inserts a node as the right-child of another node
*@parent: is a pointer to the node to insert the right-child in
*@value: is the value to store in the new node
*Return: NULL on failure, NULL if parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *the_node;

if (parent == NULL)
return (NULL);
the_node = binary_tree_node(parent, value);
if (the_node == NULL)
return (NULL);
if (parent->right)
{
parent->right->parent = the_node;
the_node->right = parent->right;
}
parent->right = the_node;
return (the_node);
}
