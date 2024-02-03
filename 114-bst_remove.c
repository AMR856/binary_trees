#include "binary_trees.h"

bst_t *FindMin(bst_t *);

/**
 * bst_remove - A function to remove a node in BST
 * @root: A pointer to the current node
 * @value: The value of the node to be deleted
 *
 * Return: A pointer to something
*/

bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *myTemp;

	if (root == NULL)
		return (NULL);
	else if (value < (*root).n)
		(*root).left = bst_remove((*root).left, value);
	else if (value > (*root).n)
		(*root).right = bst_remove((*root).right, value);
	else
	{
		if ((*root).right == NULL && (*root).left == NULL)
		{
			free(root);
			root = NULL;
		}
		else if ((*root).right == NULL)
		{
			myTemp = root;
			root = (*root).right;
			free(myTemp);
		}
		else if ((*root).left == NULL)
		{
			myTemp = root;
			root = (*root).left;
			free(myTemp);
		}
		else
		{
			myTemp = FindMin((*root).right);
			(*root).n = (*myTemp).n;
			(*root).right = bst_remove((*root).right, (*myTemp).n);
		}
	}
	return (root);
}

/**
 * FindMin - A function to find the minimum node in the tree
 * @root: A pointer to the current node
 *
 * Return: A pointer to the min node
*/

bst_t *FindMin(bst_t *root)
{
	while ((*root).left != NULL)
		root = (*root).left;
	return (root);
}
