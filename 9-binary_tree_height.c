#include "binary_trees.h"

/**
 * binary_tree_height - Determines the height of a binary tree
 * @tree: Pointer to the root node of the binary tree
 * Return: The height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	return ((left_height > right_height) ? (left_height + 1) :
		(right_height + 1));
}