#include "binary_trees.h"
/**
 * binary_tree_is_full - check if tree is full
 *
 * @tree: root node
 *
 * Return: 1 if Full, 0 if not Full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	if (!(tree->left) && !(tree->right))
	{
		return (1);
	}
	if (tree->right || tree->left)
	{
		return (binary_tree_is_full(tree->right)
			&&
			binary_tree_is_full(tree->left));
	}
	return (0);
}
