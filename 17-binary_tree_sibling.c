#include"binary_trees.h"
/**
 *binary_tree_sibling - a function that finds the sibling of a node
 * @node: the node tto find the sibling
 * Return: return a pointer to the sibling node
 * otherwise =0
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
{
	return (NULL);
}

if (node == node->parent->left)
{
return (node->parent->right);
}
return (node->parent->left);

}
