#include "binary_trees.h"

/**
 * binary_tree_node - A function to create a node
 *
 * @parent: A pointer to the parent
 * @value: The value to be put in the node
 * Return: A pointer to the created node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *theNewNode;

	theNewNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (theNewNode == NULL)
		return (NULL);
	(*theNewNode).n = value;
	(*theNewNode).left = NULL;
	(*theNewNode).right = NULL;
	(*theNewNode).parent = parent;
	return (theNewNode);
}
