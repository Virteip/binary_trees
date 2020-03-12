#include "binary_trees.h"
/**
 * binary_tree_size - measure binary tree size
 *
 * @tree: root node
 *
 * Return: the size of the tree, 0 if NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t node_count = 0;

	if (!tree)
		return (0);
	if (tree->left != NULL)
		node_count += binary_tree_size(tree->left);
	if (tree->right != NULL)
		node_count += binary_tree_size(tree->right);
	return (node_count + 1);
}
