#include"binary_trees.h"
/**
 * binary_tree_node - Funstion that creates a binary tree node
 * @parent: is a pointer to the parent node
 * @value: is the where to store the value
 * Return: a pointer to the new node, or NULL on failure
*/


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *w_new;

	w_new = malloc(sizeof(binary_tree_t));
	if (w_new == NULL)
    {
		return (NULL);
    }
	w_new->n = value;
	w_new->parent = parent;
	w_new->left = NULL;
	w_new->right = NULL;

	return (w_new);
}