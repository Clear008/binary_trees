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


/**
 * binary_tree_is_perfect- function that  checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 * Return: return 1 if the tree is perfect, 0 otherwise
 *
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t height, expected_nodes;

if (tree == NULL)
{
return (0);
}

height = binary_tree_height(tree);
expected_nodes = (1 << height) -1;

return (binary_tree_size(tree) == expected_nodes);
}
