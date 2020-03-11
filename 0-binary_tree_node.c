#include "binary_trees.h"
/**
 * binary_tree_node - Create new node
 *
 * @parent: Pointer to the parent node
 * @value: value to insert
 * Return: new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *top;

	top = malloc(sizeof(binary_tree_t));
	if (top)
	{
		top->n = value;
		top->parent = parent;
		top->left = top->right = NULL;
	}
	else
	{
		return (NULL);
	}
	return (top);
}
