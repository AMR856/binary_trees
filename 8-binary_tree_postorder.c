#include "binary_trees.h"

/**
 * binary_tree_postorder - A function to print a tree
 * post_order: left right root
 * @tree: A pointer to the root of the tree
 * @func: A pointer to a function that is to print
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder((*tree).left, func);
	binary_tree_postorder((*tree).right, func);
	func((*tree).n);
}
