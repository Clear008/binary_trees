#include "binary_trees.h"
/**
 * binary_tree_rotate_right-  function that performs a
 * right-rotation on a binary tree
 * @tree: is a pointer to the root node of the tree to rotate
 * Return: a pointer to the new root node of the tree once rotated
*/
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
binary_tree_t *wn_root, *wo_root, *prt;

if (tree == NULL || tree->left == NULL)
{
return (NULL);
}
wo_root = tree;
wn_root = tree->left;
prt = tree->parent;

wo_root->left = wn_root->right;
if (wn_root->right != NULL)
wn_root->right->parent = wo_root;
wn_root->right = wo_root;
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

