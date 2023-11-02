#include "binary_trees.h"
/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: points to the initial node
 * @second: points to the second node
 *
 * Return: lowest common ancestor or NULL if common ancestor is absent
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, 
		const binary_tree_t *second)
{
	int depth1 = 0, depth2 = 0;
    binary_tree_t *node1 = (binary_tree_t *)first;
    binary_tree_t *node2 = (binary_tree_t *)second;


    while (node1) {
        depth1++;
        node1 = node1->parent;
    }

    while (node2) {
        depth2++;
        node2 = node2->parent;
    }

    node1 = (binary_tree_t *)first;
    node2 = (binary_tree_t *)second;

    while (depth1 > depth2) {
        node1 = node1->parent;
        depth1--;
    }

    while (depth2 > depth1) {
        node2 = node2->parent;
        depth2--;
    }

    while (node1 != node2) {
        node1 = node1->parent;
        node2 = node2->parent;
    }

    return node1;
}
