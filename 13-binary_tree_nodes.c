#include"binary_trees.h"
/**
 * binary_tree_nodes - that counts the nodes with at least 1 child in a BT
 * @tree: a pointer to the root node of the tree to be measured
 * Return: the ncount of the nodes with at lest one child of a BT
 *
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t w_nodes = 0;

if (tree == NULL)
{
return (0);
}
else
{
		w_nodes += binary_tree_nodes(tree->left);
		w_nodes += binary_tree_nodes(tree->right);
		w_nodes += (tree->left || tree->right) ? 1 : 0;
}
	return (w_nodes);

}
