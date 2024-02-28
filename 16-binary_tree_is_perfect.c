#include "binary_trees.h"

#include"binary_trees.h"
/**
 * binary_tree_height- function that that deletes an entire binary tree
 * @tree: a pointer to the root node of the tree to be measured
 * Return: the height of a binary tree
 *
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t w_l = 0, w_r = 0;

if (tree == NULL)
{
return (0);
}

else
{

w_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
w_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;

return ((w_l > w_r) ? w_l : w_r);
}

}


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

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If the tree is perfect, 1.
 * otherwise, 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t w_h, w_si;

if (tree == NULL || (tree->left == NULL && tree->right != NULL) ||
(tree->left != NULL && tree->right == NULL))
{
return (0);
}

w_h = binary_tree_height(tree);
w_si = (1 << w_h) -1;

return (binary_tree_size(tree) == w_si ? 1 : 0);
}
