#include "binary_trees.h"

/**
 * binary_tree_is_full - A function to check if the tree is full
 * @tree: A pointer to the current node
 *
 * Return: An integer that will be used
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int fCon = 0, sCon = 0;

	if (tree == NULL)
		return (0);
	if ((*tree).left == NULL && (*tree).right == NULL)
		return (1);
	if ((*tree).left != NULL && (*tree).right != NULL)
	{
		fCon = binary_tree_is_full((*tree).left);
		sCon = binary_tree_is_full((*tree).right);
		return (fCon && sCon);
	}
	return (0);
}
