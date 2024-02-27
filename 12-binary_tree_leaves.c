#include"binary_trees.h"
/**
 * binary_tree_leaves - function that count the leafsof a BT
 * @tree: a pointer to the root node of the tree to be measured
 * Return: the number of leafs of a BT
 *
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t w_leaf = 0;

if (tree == NULL)
{
return (0);
}
else
{
		w_leaf += binary_tree_leaves(tree->left);
		w_leaf += binary_tree_leaves(tree->right);
		w_leaf += (!tree->left && !tree->right) ? 1 : 0;
}
	return (w_leaf);
}
