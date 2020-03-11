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
	if (!tree || !func)
	{
		return;
	}
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
