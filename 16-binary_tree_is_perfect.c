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

/**
 * binary_tree_is_perfect - perfect balance checker
 *
 * @tree: root node
 *
 * Return: 1 if perfect, 0 if not perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (!tree)
	{
		return (0);
	}
	if (!tree->left && !tree->right)
	{
		return (1);
	}
	else if (tree->left && tree->right)
	{
		left_height = binary_tree_height(tree->left);
		right_height = binary_tree_height(tree->right);
		if (left_height == right_height)
		{
			return (1);
		}
	}
	return (0);

}
