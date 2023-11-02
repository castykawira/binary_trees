#include "binary_trees.h"

/**
 * binary_tree_size - Computes the size of a binary tree
 * @tree: A pointer to the root node of the binary tree
 * Return: The size of the binary tree, or 0 if the tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_height - computes the height of a binary tree
 * @tree: A pointer to the root node of the binary tree
 * Return: The height of the binary tree, or 0 if the tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh;
	size_t rh;

	if (tree == NULL)
		return (0);

	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);

	return (1 + (lh > rh ? lh : rh));
}

/**
 * binary_tree_is_perfect - Determines if a binary tree is perfect
 * @tree: A pointer to the root node of the binary tree
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree->left);
	size = binary_tree_size(tree);

	return ((1 << height) - 1 == size);
}
