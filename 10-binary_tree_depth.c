#include "binary_trees.h"
/**
 * binary_tree_depth - how deep is it
 *
 * @tree: root node for tree
 *
 * Return: tree's depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree->parent)
	{
		depth += binary_tree_depth(tree->parent);
		depth = 1 + depth;
	}
	return (depth);
}
