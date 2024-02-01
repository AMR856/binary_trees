#include "binary_trees.h"

/**
 * binary_tree_insert_left - A function to insert to the left child
 *
 * @parent: A pointer to the parent
 * @value: The value to be put
 * Return: A pointer to the newly created node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *theNewNode;

	theNewNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (theNewNode == NULL || parent == NULL)
		return (NULL);
	(*theNewNode).n = value;
	(*theNewNode).right = NULL;
	if ((*parent).left != NULL)
	{
		(*theNewNode).left = (*parent).left;
		(*parent).left = theNewNode;
		(*theNewNode).left->parent = theNewNode;
	}
	else
	{
		(*parent).left = theNewNode;
		(*theNewNode).left = NULL;
	}
	(*theNewNode).parent = parent;
	return (theNewNode);
}
