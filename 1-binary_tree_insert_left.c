#include "binary_trees.h"

/**
 * binary_tree_insert_left - Adds a new node to the left of a given node
 * in a binary tree
 * @parent: A pointer to the parent node
 * @value: The value to be assigned to the new node
 * Return: A pointer to the newly inserted node, or NULL on failure
 * or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *create_node;

	if (!parent)
		return (NULL);

	create_node = malloc(sizeof(binary_tree_t));
	if (!create_node)
		return (NULL);

	create_node->n = value;
	create_node->parent = parent;
	create_node->left = NULL;
	create_node->right = NULL;

	if (parent->left)
	{
		create_node->left = parent->left;
		parent->left->parent = create_node;
	}

	parent->left = create_node;

	return (create_node);
}
