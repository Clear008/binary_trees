#include"binary_trees.h"
/**
 * binary_tree_insert_right - function that inserts a node as
 * the right-child of another node
 * @parent: is a pointer to the parent node
 * @value: is the where to store the value
 * Return: a pointer to the created node, or NULL on failure or
 * if parent is NULL
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *w_new;

if (!parent)
{
return (NULL);
}
	w_new = malloc(sizeof(binary_tree_t));
if (!w_new)
{
	return (NULL);
}
w_new->n = value;
w_new->parent = parent;
w_new->left = NULL;
w_new->right = parent->right;

if (w_new->right)
	w_new->right->parent = w_new;
parent->right = w_new;
	return (w_new);
}
