#include "binary_trees.h"

/**
 * bst_search -  function that searches for a value in a BST
 * @tree: iis a pointer to the root node of the BST to search
 * @value:  is the value to search in the tree
 *
 * Return: A pointer to the node containing a value equals to value.
 */

bst_t *bst_search(const bst_t *tree, int value)
{
const bst_t *w_node;

if (tree == NULL)
{
return (NULL);
}
for (w_node = tree; w_node;)
{
if (value == w_node->n)
{
return ((bst_t *)w_node);
}
else if (value < w_node->n)
{
w_node = w_node->left;
}
else
{
w_node = w_node->right;
}
}

return (NULL);
}
