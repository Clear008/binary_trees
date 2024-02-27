#include"binary_trees.h"
/**
 * binary_tree_is_root - function that checks if a node is a root
 * @node: is a pointer to the node to be checked
 * Return: return 1 if node is a leaf,
 * otherwise =0
*/

int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL || node->parent != NULL)
{
	return (0);
}

else
{
	return (1);
}
}
