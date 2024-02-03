#include "binary_trees.h"

bool isBST(const binary_tree_t *tree, int minV, int maxV);

/**
 * binary_tree_is_bst - A function to see things
 * @tree: A pointer to a node
 *
 * Return: 1 or 0
*/

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (isBST(tree, INT_MIN, INT_MAX))
		return (1);
	else
		return (0);
}

/**
 * isBST - A function that is helping
 * @tree: A pointer to a node
 * @minV: The min
 * @maxV: The max
 *
 * Return: true or false
*/

bool isBST(const binary_tree_t *tree, int minV, int maxV)
{
	if (tree == NULL)
		return (true);
	if ((*tree).n > minV && (*tree).n < maxV &&
	isBST((*tree).left, minV, (*tree).n) && isBST((*tree).right, (*tree).n, maxV))
		return (true);
	else
		return (false);
}
