#include "binary_trees.h"

/**
 * binary_tree_is_leaf - to leaf or not to leaf?
 *
 * @node: the one to know if leaf or not leaf
 * Return: 1 if leaf, 0 if not leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
	{
		return (0);
	}
	if (!(node->left) && !(node->right))
	{
		return (1);
	}
	return (0);
}
