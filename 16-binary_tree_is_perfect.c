#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);
bool isPerfect(const binary_tree_t *root, int myDepth, int myLevel);

/**
 * binary_tree_is_perfect - A function to help with stuff
 * @tree: hi
 * Return: Hi again
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int myDepth;

	myDepth = binary_tree_height(tree);
	return (isPerfect(tree, myDepth, 0));
}

/**
 * isPerfect - A function to help with stuff
 * @root: The current node
 * @myDepth: dk
 * @myLevel: dk
 * Return: Hi
*/

bool isPerfect(const binary_tree_t *root, int myDepth, int myLevel)
{
	if (root == NULL)
		return (false);
	if ((*root).left == NULL && (*root).right == NULL)
	{
		return (myDepth == myLevel);
	}
	if ((*root).left == NULL || (*root).right == NULL)
		return (false);
	return (isPerfect((*root).left, myDepth, myLevel + 1) &&
	isPerfect((*root).right, myDepth, myLevel + 1));
}

/**
 * binary_tree_height - A function to calculate the height
 * of a tree
 *
 * @tree: A pointer to the head
 * Return: Hi
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight = 0, rightHeight = 0;

	if (tree == NULL)
		return (0);
	if ((*tree).left != NULL)
		leftHeight = binary_tree_height((*tree).left) + 1;
	else
		leftHeight = 0;
	if ((*tree).right != NULL)
		rightHeight = binary_tree_height((*tree).right) + 1;
	else
		rightHeight = 0;
	if (leftHeight > rightHeight)
		return (leftHeight);
	else
		return (rightHeight);
}
