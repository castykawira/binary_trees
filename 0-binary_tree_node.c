#include "binary_trees.h"

/**
 * binary_tree_node - Defines binary tree node
 * @parent: specifies the parent pointer in the binary tree node function
 * @value: The value in the binary tree node structure to store data
 * Return: Pointer to the newly created binary tree node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *create_node;

	create_node = malloc(sizeof(binary_tree_t));

	if (create_node == NULL)
		return (NULL);

	create_node->n = value;
	create_node->parent = parent;
	create_node->left = NULL;
	create_node->right = NULL;

	return (create_node);
}
