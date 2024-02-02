#include "binary_trees.h"

/**
 * binary_tree_uncle - A function to get the uncle ya habeby
 * @node: The given node
 *
 * Return: A pointer to the uncle
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || (*node).parent == NULL || (*node).parent->parent == NULL)
		return (NULL);
	if ((*node).parent->n == (*node).parent->parent->left->n)
	{
		if (((*node).parent->parent->right) != NULL)
			return ((*node).parent->parent->right);
		else
			return (NULL);
	}
	else if ((*node).parent->n == (*node).parent->parent->right->n)
	{
		if (((*node).parent->parent->left) != NULL)
			return ((*node).parent->parent->left);
		else
			return (NULL);
	}
	else
		return (NULL);
}
