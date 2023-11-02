#include "binary_trees.h"

/**
 * binary_tree_uncle - Locates the uncle of a given node
 * @node: A pointer to the node for which the uncle is sought
 * Return: A pointer to the uncle node, or NULL if no uncle is found
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
			node->parent->parent == NULL)
		return (NULL);

	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);
}
