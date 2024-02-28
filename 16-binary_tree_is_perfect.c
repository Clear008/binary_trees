#include"binary_trees.h"
/**
 * binary_tree_is_perfect- function that  checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 * Return: return 1 if the tree is perfect, 0 otherwise
 *
*/
size_t binary_tree_height(const binary_tree_t *tree);

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
