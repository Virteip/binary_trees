#include "binary_trees.h"
/**
 * binary_tree_balance - ying yang balanced tree?
 *
 * @tree: root node
 *
 * Return: balance factor int, or NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_side = 0;
	int right_side = 0;
	int balance_factor = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left)
	{
		left_side = left_side + 1;
	}

	if (tree->right)
	{
		right_side = right_side + 1;
	}

	right_side = right_side + binary_tree_height(tree->right);
	left_side = left_side + binary_tree_height(tree->left);

	balance_factor = left_side - right_side;
	return (balance_factor);
}

/**
 * binary_tree_height - height of the tree
 *
 * @tree: root node
 *
 * Return: height number
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_side = 0;
	size_t right_side = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree->left)
	{
		right_side = binary_tree_height(tree->left);
		right_side = right_side + 1;
	}
	if (tree->right)
	{
		left_side = binary_tree_height(tree->right);
		left_side = left_side + 1;
	}

	if (left_side > right_side)
	{
		return (left_side);
	}
	else
	{
		return (right_side);
	}
}
