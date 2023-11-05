#include "binary_trees.h"
#include <stdlib.h>

/**
 * append - adds a new node at the end of a linked list
 * @head: Points to the head of a linked list
 * @btnode: const binary tree node to append
 * Return: pointer to head, or NULL on failure
 */
ll *append(ll *head, const binary_tree_t *btnode);
void free_list(ll *head);
ll *get_children(ll *head, const binary_tree_t *parent);
void levels_rec(ll *head, void (*func)(int));

/**
 * binary_tree_levelorder - It uses the level-order traversal to
 * go through a binary tree
 *
 * @tree: Points to the root node of the tree that should be traversed.
 * @func: Points to the function that should be called for each node.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	ll *children = NULL;

	if (!tree)
		return;

	func(tree->n);
	children = get_children(children, tree);
	levels_rec(children, func);

	free_list(children);
}

/**
 * levels_rec - Calls func on all nodes at each level.
 * @head: Points to the head of a linked list that has nodes at one level.
 * @func: Points to the function that should be called for each node.
 */
void levels_rec(ll *head, void (*func)(int))
{
	ll *children = NULL, *curr = NULL;

	if (!head)
		return;

	for (curr = head; curr != NULL; curr = curr->next)
	{
		func(curr->node->n);
		children = get_children(children, curr->node);
	}

	levels_rec(children, func);
	free_list(children);
}

/**
 * get_children - appends the children that belong to a
 * parent to a linked list.
 * @head: Points to the head of the linked list where to append the children.
 * @parent: Points to the node whose children are supposed to be appended.
 * Return: Pointer to head of linked list of children.
 */
ll *get_children(ll *head, const binary_tree_t *parent)
{
	if (parent->left)
		head = append(head, parent->left);
	if (parent->right)
		head = append(head, parent->right);
	return (head);
}

/**
 * append - adds a new node at the end of a linked list
 * @head: Points to the head of a linked list
 * @btnode: const binary tree node to append
 * Return: pointer to head, or NULL on failure
 */
ll *append(ll *head, const binary_tree_t *btnode)
{
	ll *new = malloc(sizeof(*new));

	if (new)
	{
		new->node = btnode;
		new->next = NULL;
		if (!head)
			head = new;
		else
		{
			ll *last = head;

			while (last->next)
				last = last->next;
			last->next = new;
		}
	}
	return (head);
}

/**
 * free_list - frees all the nodes in a linked list
 * @head: pointer to the head of list_t linked list
 */
void free_list(ll *head)
{
	ll *ptr = NULL;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
