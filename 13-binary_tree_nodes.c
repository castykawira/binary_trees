#include "binary_trees.h"
/**
 * binary_tree_nodes - counts nodes with at least i child in a given binary tree
 * @tree: points to the root node of the tree whose nodes should be counted
 * Return: 0 if the tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	else
		return (0);
}	
