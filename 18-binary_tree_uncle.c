#include "binary_trees.h"
/**
 * binary_tree_uncle - look for the uncle
 *
 * @node: root node
 *
 * Return: pointer to the uncle, NULL if no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || node->parent == NULL || !(node->parent->parent))
	{
		return (NULL);
	}
	if (node->parent->parent->left == node->parent)
	{
		return (node->parent->parent->right);
	}
	return (node->parent->parent->left); }
