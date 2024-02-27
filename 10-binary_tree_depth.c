#include"binary_trees.h"
/**
 * binary_tree_depth- function that measures the depth of
 * a node in a binary tree
 * @tree: a pointer to the root node of the tree to be measured
 * Return: the depth of a binary tree
 *
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t w_depth;

if (tree == NULL)
{
return (0);
}

else
{

for (; tree->parent != NULL; tree = tree->parent)
{
w_depth++;
}

return (w_depth);
}

}
