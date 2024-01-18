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
			left = binary_tree_height(tree->left) + 1;
		else
			return (0);

		if (tree->right)
			right = binary_tree_height(tree->right) + 1;
		else
			return (0);

		if (right > left)
			return (right);
		else
			return (left);
	}
	return (0);
}
