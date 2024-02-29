#include "binary_trees.h"

/**
 * array_to_bst - function that builds a Binary Search Tree from an array
 * @array: is a pointer to the first element of the array to be converted
 * @size:  is the number of element in the array
 *
 * Return: A pointer to the root node of the created BST, or NULL on failure.
 */

bst_t *array_to_bst(int *array, size_t size)
{

size_t i = 0;
bst_t *wroot = NULL;


if (size == 0)
{
return (NULL);
}
for (i = 0; i < size; i++)
bst_insert(&wroot, array[i]);

return (wroot);
}
