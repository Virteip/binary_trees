#include "binary_trees.h"
/**
 * binary_tree_height - height of the tree
 *
 * @tree: root node
 *
 * Return: height number
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree->left)
	{
		binary_tree_height(tree->left);
		height = height + 1;
	}
	if (tree->right)
	{
		binary_tree_height(tree->right);
		height = height + 1;
	}
	return (height);
}
