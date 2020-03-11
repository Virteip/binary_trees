#include "binary_trees.h"
/**
 * binary_tree_insert_left - Insert left side
 *
 * @parent: Pointer to the parent node
 * @value: value to insert
 * Return: left node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left = binary_tree_node(parent, value);

	if (!parent || !left)
	{
		return (NULL);
	}
	if (parent->left)
	{
		left->left = parent->left;
		left->left->parent = left;
	}
	parent->left = left;
	return (left);
}
