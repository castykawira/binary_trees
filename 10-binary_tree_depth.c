#include "binary_trees.h"

/**
 * binary_tree_depth - Determines the depth of a node in a binary tree
 * @tree: A pointer to the node for which the depth is to be measured
 * Return: The depth of the node, or 0 if 'tree' is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	for (; tree->parent != NULL; tree = tree->parent)
		depth++;

	return (depth);
}
