#include "binary_trees.h"

/**
 * binary_tree_preorder - A function to print a tree
 * pre_order = root left right
 * @tree: A pointer to the root of the tree
 * @func: A pointer to a function that is to print
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func((*tree).n);
	binary_tree_preorder((*tree).left, func);
	binary_tree_preorder((*tree).right, func);
}
