#include "binary_trees.h"

/**
 * binary_tree_nodes - A function to count the nodes with at least
 * one child
 * @tree:A pointer to the head of the tree
 * Return: A number obviously
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t lCount = 0, rCount = 0, checker = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if ((*tree).left != NULL || (*tree).right != NULL)
			checker = 1;
		lCount = binary_tree_nodes((*tree).left) + lCount;
		rCount = binary_tree_nodes((*tree).right) + rCount;
		return (lCount + rCount + checker);
	}
}
