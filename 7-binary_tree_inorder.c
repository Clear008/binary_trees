#include"binary_trees.h"
/**
 * binary_tree_inorder - a function that goes through a binary
 * tree using inorder traversal
 * @tree: is a pointer to the root node
 * @func: id a function pointer that call for each node.
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
{
return;
}
else
{
binary_tree_preorder(tree->left, func);
func(tree->n);
binary_tree_preorder(tree->right, func);
}
}
