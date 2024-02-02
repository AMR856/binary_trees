#include "binary_trees.h"

/**
 * binary_tree_sibling - A function to get a sibling
 * @node: The given node
 *
 * Return: A pointer to the sibling
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || (*node).parent == NULL)
		return (NULL);
	if ((*node).n == (*node).parent->left->n)
	{
		if ((*node).parent->right != NULL)
			return ((*node).parent->right);
		else
			return (NULL);
	}
	else if ((*node).n == (*node).parent->right->n)
	{
		if ((*node).parent->left != NULL)
			return ((*node).parent->left);
		else
			return (NULL);
	}
	else
		return (NULL);
}
