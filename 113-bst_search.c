#include "binary_trees.h"

/**
 * bst_search - A function to search in a BST
 * @tree: A pointer to the node
 * @value: The value to be searched for
 *
 * Return: A pointer to the required node
*/

bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL)
		return (NULL);
	else if ((*tree).n == value)
		return ((bst_t *)tree);
	else if ((*tree).n > value)
		return (bst_search((*tree).left, value));
	else if ((*tree).n < value)
		return (bst_search((*tree).right, value));
	else
		return (NULL);
}
