#include "binary_trees.h"
/**
 * binary_tree_insert_right - Insert right side
 *
 * @parent: Pointer to the parent node
 * @value: value to insert
 * Return: right node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right = NULL;

	if (!parent)
	{
		return (NULL);
	}

	right = binary_tree_node(parent, value);

	if (!parent || !right)
	{
		return (NULL);
	}
	if (parent->right)
	{
		right->right = parent->right;
		right->right->parent = right;
	}
	parent->right = right;
	return (right);
}
