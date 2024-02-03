#include "binary_trees.h"

/**
 * binary_tree_rotate_right - A function to rotate the tree
 * @tree: A pointer to the root
 *
 * Return: A pointer to the new root
*/

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *myTemp;

	if (tree == NULL || (*tree).left == NULL)
		return (NULL);
	myTemp = (*tree).left;
	(*tree).left = (*myTemp).right;
	if ((*myTemp).right != NULL)
		(*myTemp).right = tree;
	(*myTemp).right = tree;
	(*myTemp).parent = (*tree).parent;
	(*tree).parent = myTemp;
	return (myTemp);
}
