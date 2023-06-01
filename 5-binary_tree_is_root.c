#include "binary_trees.h"

/**
 * binary_tree_is_root - This checks if a node is a root of a binary tree.
 * @node: This is a pointer to the node to check.
 *
 * Return: If the node is a root return - 1.
 *         Otherwise return - 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
