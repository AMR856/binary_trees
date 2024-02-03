#include "binary_trees.h"

/**
 * binary_tree_rotate_left - A function to rotate the tree
 * @tree: A pointer to the root
 *
 * Return: A pointer to the new root
*/

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *myTemp;

	if (tree == NULL || (*tree).right == NULL)
		return (NULL);
	myTemp = (*tree).right;
	(*tree).right = (*myTemp).left;
	if ((*myTemp).left != NULL)
		(*myTemp).left->parent = tree;
	(*myTemp).left = tree;
	(*myTemp).parent = (*tree).parent;
	(*tree).parent = myTemp;
	return (myTemp);
}
