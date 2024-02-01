#include "binary_trees.h"

/**
 * binary_tree_insert_right - A function to insert to the left child
 *
 * @parent: A pointer to the parent
 * @value: The value to be put
 * Return: A pointer to the newly created node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *theNewNode;

	theNewNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (theNewNode == NULL || parent == NULL)
	{
		free(theNewNode);
		theNewNode = NULL;
		return (NULL);
	}
	(*theNewNode).n = value;
	(*theNewNode).left = NULL;
	if ((*parent).right != NULL)
	{
		(*theNewNode).right = (*parent).right;
		(*parent).right = theNewNode;
		(*theNewNode).right->parent = theNewNode;
	}
	else
	{
		(*parent).right = theNewNode;
		(*theNewNode).right = NULL;
	}
	(*theNewNode).parent = parent;
	return (theNewNode);
}
