#include "binary_trees.h"
/**
 * binary_tree_rotate_left -  function that performs a
 * left-rotation on a binary tree
 * @tree: is a pointer to the root node of the tree to rotate
 * Return: a pointer to the new root node of the tree once rotated
*/


binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
binary_tree_t *wn_root, *wo_root, *prt;

if (tree == NULL || tree->right == NULL)
{
return (NULL);
}

wo_root = tree;
wn_root = tree->right;
prt = tree->parent;

wo_root->right = wn_root->left;
if (wn_root->left != NULL)
wn_root->left->parent = wo_root;
wn_root->left = wo_root;
wo_root->parent = wn_root;
wn_root->parent = prt;

if (prt != NULL)
{
if (prt->left == wo_root)
prt->left = wn_root;
else
prt->right = wn_root;
}

return (wn_root);
}
