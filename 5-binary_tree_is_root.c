#include "binary_trees.h"
/**
 * binary_tree_is_root - to root or not to root?
 *
 * @node: the one to know if root or not root
 * Return: 1 if root, 0 if not root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
	{
		return (0);
	}
	if (!(node->parent))
	{
		return (1);
	}
	return (0);
}
