#include "binary_trees.h"
/**
 * binary_tree_postorder - pre-order runthrough
 *
 * @tree: root node
 * @func: function to call for each node
 * Return: no return
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t level = 0;

	if (!tree)
		return (0);
	if (tree->left)
	{
		level += 1;
		binary_tree_height(tree->left);
	}
	if (tree->right)
	{
		level += 1;
		binary_tree_height(tree->right);
	}
	return (level);
}
