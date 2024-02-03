#include "binary_trees.h"

/**
 * array_to_bst - A function to convert an array to BST
 * @array: A pointer to the array
 * @size: The size of the array
 *
 * Return: A pointer to the root
*/

bst_t *array_to_bst(int *array, size_t size)
{
	size_t i;
	bst_t *myRoot;

	myRoot = NULL;
	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		bst_insert(&myRoot, array[i]);
	}
	return (myRoot);
}
