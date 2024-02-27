#include"binary_trees.h"
/**
 * binary_tree_insert_left - function that inserts a node as
 * the left-child of another node
 * @parent: is a pointer to the parent node
 * @value: is the where to store the value
 * Return: a pointer to the created node, or NULL on failure or
 * if parent is NULL
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
w_new->right = NULL;
w_new->left = parent->left;

if (w_new->left)
	w_new->left->parent = w_new;
parent->left = w_new;
	return (w_new);
}
