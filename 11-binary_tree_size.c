#include"binary_trees.h"
/**
 * binary_tree_size-  function that measures the size of a BT
 * @tree: a pointer to the root node of the tree to be measured
 * Return: the dsize of a BT
 *
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
size_t w_size = 0;

if (tree == NULL)
{
return (0);
}

else
{
		w_size += 1;
		w_size += binary_tree_size(tree->left);
		w_size += binary_tree_size(tree->right);
}
	return (w_size);
}
