#include "binary_trees.h"

/**
 * bst_insert - function that inserts a value in a Binary Search Tree
 * @tree: A double pointer to the root node of the BST to insert the value.
 * @value: The value to store in the node to be inserted.
 *
 * Return: A pointer to the created node, or NULL on failure.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
bst_t *crt, *w_new;

if (tree == NULL)
{
return (NULL);
}
crt = *tree;
if (*tree == NULL)
{
w_new = binary_tree_node(crt, value);
if (w_new == NULL)
{
return (NULL);
}
w_new = *tree;
return (w_new);
}
if (value < crt->n)
{
if (crt->left != NULL)
return (bst_insert(&(crt->left), value));
w_new = binary_tree_node(crt, value);
if (w_new == NULL)
{
return (NULL);
}
return (crt->left);
}
if (value > crt->n)
{
if (crt->right != NULL)
return (bst_insert(&(crt->right), value));
w_new = binary_tree_node(crt, value);
if (w_new == NULL)
{
return (NULL);
}
return (crt->right);
}
return (NULL);
}

