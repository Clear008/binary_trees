#include "binary_trees.h"

/**
 * helper_check_bst - Helper function to check if a binary tree is a valid BST
 * @tree: Pointer to the root node of the tree
 * @prev: Pointer to the previous node's value during traversal
 * Return: 1 if tree is a valid BST, 0 otherwise
 */
int helper_check_bst(const binary_tree_t *tree, int *prev)
{
if (tree == NULL)
{
return (1);
}

if (!helper_check_bst(tree->left, prev) || (*prev != -1 && tree->n <= *prev))
return (0);


*prev = tree->n;

return (helper_check_bst(tree->right, prev));
}

/**
 * binary_tree_is_bst - function that checks if a BT is a valid BST
 * @tree: Pointer to the root node to check
 * Return: 1 if tree is a valid BST, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
int pv = -1;

if (tree == NULL)
{
return (0);
}
return (helper_check_bst(tree, &pv));
}
