#include "binary_trees.h"

/**
 * binary_tree_size - computes the size of a binary tree
 * @tree: A Pointer to the root node of the binary tree
 * Return: The size of the binary tree, or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - Dtermines if a binary tree is perfect
 * @tree: A Pointer to the root node of the binary tree
 * Return: 1 if the perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);

	return ((1 << height) - 1 == size);
}
