#include "binary_trees.h"

/**
 * binary_tree_balance - Computes the balance factor of a binary tree
 * @tree: A pointer to the root node of the binary tree
 * Return: The balance factor of the binary tree, or
 * 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lh, rh;

	if (tree == NULL)
		return (0);

	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);

	return (lh - rh);
}

/**
 * binary_tree_height - Determines the height of a binary tree
 * @tree: A pointer to the root node of the binary tree
 * Return: The height of the binary tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh, rh;

	if (!tree)
		return (0);

	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);

	return (1 + (lh > rh ? lh : rh));
}
