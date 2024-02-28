#include"binary_trees.h"
/**
 * binary_tree_is_full- function that  checks if a binary tree is full
 * @tree: is a pointer to the root node of the tree to check
 * Return: the height of a binary tree
 *
*/
int binary_tree_is_full(const binary_tree_t *tree)
{


if (tree == NULL)
{
return (0);
}

if (tree->left == NULL && tree->right == NULL)
{
return (1);
}

if (tree->right && tree->left)
{
return (binary_tree_is_full(tree->right) &&
		binary_tree_is_full(tree->left));
}
	return (0);
}
