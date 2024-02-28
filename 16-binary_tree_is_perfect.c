#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the binary tree, or 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height, right_height;

if (tree == NULL)
{
return (0);
}
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);

return (1 + (left_height > right_height ? left_height : right_height));
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
