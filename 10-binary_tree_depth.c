#include "binary_trees.h"

/**
 * binary_tree_depth - A function to get the depth
 * @tree: A pointer to the required node
 *
 * Return: Hi
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t currentDepth = 0;

	if (tree == NULL)
		return (-1);
	if ((*tree).parent == NULL)
		return (0);
	currentDepth = binary_tree_depth(((*tree).parent)) + 1;
	return (currentDepth);
}
