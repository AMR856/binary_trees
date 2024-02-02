#include "binary_trees.h"

/**
 * binary_tree_leaves - A function to count leaves
 * @tree: A pointer to the current node
 *
 * Return: Hi again
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lCount = 0, rCount = 0;

	if (tree == NULL)
		return (0);
	else if ((*tree).left == NULL && (*tree).right == NULL)
	{
		return (1);
	}
	else
	{
		lCount = binary_tree_leaves((*tree).left);
		rCount = binary_tree_leaves((*tree).right);
		return (lCount + rCount);
	}
}
