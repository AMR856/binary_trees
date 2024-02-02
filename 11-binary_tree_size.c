#include "binary_trees.h"

/**
 * binary_tree_size - A function to get the size
 *
 * @tree: A pointer to the start node
 * Return: Hi
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lSize = 0, rSize = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		lSize = binary_tree_size((*tree).left);
		rSize = binary_tree_size((*tree).right);
		return (lSize + 1 + rSize);
	}
}
