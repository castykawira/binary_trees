#include "binary_trees.h"

/**
 * binary_tree_insert_right - Adds a new node with a specified value as the
 * right child of a given node in a binary tree
 * @parent: A pointer to the parent node; must not be NULL
 * @value: The value to be assigned to the new node
 * Return: pointer to the newly inserted node on success, NULL if allocation
 * or insertion fails, or if the parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

	if (parent->right)
	{
		create_node->right = parent->right;
		parent->right->parent = create_node;
	}

	parent->right = create_node;

	return (create_node);
}
