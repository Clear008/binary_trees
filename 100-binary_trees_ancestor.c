#include"binary_trees.h"
/**
 * binary_trees_ancestor - function that finds the lowest common
 * ancestor of two nodes
 * @first: is a pointer to the first node
 * @second: is a pointer to the second node
 * Return: a pointer to the lowest common ancestor node
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
if (first == NULL || second == NULL)
{
return (NULL);
}

if (first == second)
{
return ((binary_tree_t *)first);
}

if (first->parent == NULL || first == second->parent ||
(!first->parent->parent && second->parent))
{
return (binary_trees_ancestor(first, second->parent));
}
else if (second->parent == NULL || second == first->parent ||
(!second->parent->parent && first->parent))
{
return (binary_trees_ancestor(first->parent, second));
}
return (binary_trees_ancestor(first->parent, second->parent));
}
