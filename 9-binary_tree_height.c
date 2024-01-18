#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: ptr
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right = 0, left = 0;

	if (tree)
	{
	if (tree->left)
			left = 1 + binary_tree_height(tree->left);
		else
			left = 0;

		if (tree->right)
			right = 1 + binary_tree_height(tree->right);
		else
			right = 0;

		if (left > right)
			return (left);
		else
			return (right);
	}
	return (0);
}
