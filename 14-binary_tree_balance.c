#include"binary_trees.h"
/**
 * binary_tree_balance-  function that measures the balance factor of a BT
 * @tree: is a pointer to the root node of the tree to
 * measure the balance factor
 * Return: the balance factor of a BT
 *
*/
size_t binary_tree_height(const binary_tree_t *tree);

int binary_tree_balance(const binary_tree_t *tree)
{
size_t w_l = 0, w_r = 0, w_t = 0;

if (tree == NULL)
{
return (0);
}
else
{
		w_l = ((int)binary_tree_height(tree->left));
		w_r = ((int)binary_tree_height(tree->right));
		w_t = w_l - w_r;
}
	return (w_t);

}
