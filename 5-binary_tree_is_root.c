#include "binary_trees.h"

/**
 * binary_tree_is_root - Identifies whether a given node is the root
 * of the binary tree
 * @node: A pointer to the node to be examined
 *
 * Return: 1 if the node is the root of the tree, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	return (!node->parent);
}
