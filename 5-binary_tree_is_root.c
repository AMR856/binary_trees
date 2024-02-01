#include "binary_trees.h"

/**
 * binary_tree_is_root - A function to check if a node is root
 *
 * @node:A pointer to the node
 * Return: Nothing
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || (*node).parent != NULL)
		return (0);
	return (1);
}
