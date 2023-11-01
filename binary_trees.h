#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdlib.h>

/**
 * struct binary_tree_s - Binary tree node structure
 * @n: Integer value stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 * Description: Basic structure for a binary tree node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

/* Typedef for binary tree node structure */
typedef struct binary_tree_s binary_tree_t;

/* Function Prototypes */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

#endif /* BINARY_TREES_H */
