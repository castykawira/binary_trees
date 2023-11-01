#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Determines if a given node is leaf in the binary tree
 * @node: A pointer to the node to be checked
 * Return: 1 if node is a leaf (has no left or right child), otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	return (!node->left && !node->right);
}
