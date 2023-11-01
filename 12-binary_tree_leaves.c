#include "binary_trees.h"

/**
 * binary_tree_leaves - Determines the number of leaves in a binary tree
 * @tree: A pointer to the root node of the binary tree
 * Return: The count of leaves in the binary tree, or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	size_t left_count = binary_tree_leaves(tree->left);
	size_t right_count = binary_tree_leaves(tree->right);

	return (left_count + right_count);
}
