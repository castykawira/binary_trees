#include "binary_trees.h"

/**
 * binary_tree_postorder - Applies a function to each node
 * in post-order traversal
 * @tree: Pointer to the root node of the binary tree
 * @func: Pointer to the function to be called for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
