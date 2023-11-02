#include "binary_trees.h"
/**
 * binary_tree_nodes - counts nodes with at least i child in a given binary tree
 * @tree: points to the root node of the tree whose nodes should be counted
 * Return: 0 if the tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{	
	size_t numbered_nod = 0;

	if (tree)
	{
		numbered_nod += (tree->left || tree->right) ? 1 : 0;
		numbered_nod += binary_tree_nodes(tree->left);
		numbered_nod += binary_tree_nodes(tree->right);
	}
	return (numbered_nod);
}
