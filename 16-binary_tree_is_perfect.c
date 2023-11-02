#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Determines if a binary tree is perfect
 * @tree: A pointer to the root node of the binary tree
 * Return: 1 if the binary tree is perfect, or 0 otherwise or if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int lh;
	int rh;

	if (tree == NULL)
		return (0);

	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);

	return (binary_tree_is_full(tree) && lh == rh);
}

/**
 * binary_tree_is_full - Determines if a binary tree is full
 * @tree: A pointer to the root node of the binary tree
 * Return: 1 if the binary tree is full, or 0 otherwise or if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));

	return (0);
}

/**
 * binary_tree_height - Computes the height of a binary tree
 * @tree: A pointer to the root node of the binary tree
 * Return: The height of the binary tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int lh;
	int rh;

	if (tree == NULL)
		return (0);

	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);

	return (1 + (lh > rh ? lh : rh));
}
