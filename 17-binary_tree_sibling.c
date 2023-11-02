#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the siblings of a node
 * @node: points to the node whose sibling is being sought
 * Return: Null if the parent is NULL or node is NULL
 * and NULL if node does not have a sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
