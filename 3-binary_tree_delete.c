#include "binary_trees.h"

/**
 * binary_tree_delete - A function to delete a tree
 *
 * @tree: A pointer to the root of the tree
 * Return: Nothing
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete((*tree).left);
	binary_tree_delete((*tree).right);
	free(tree);
}