#include "binary_trees.h"

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
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t lh, rh;

	if (tree == NULL)
		return (0);

	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);

	if (lh == rh)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);

		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}

	return (0);
}
