#include "binary_trees.h"

size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t lCount = 0, rCount = 0, checker = 0;
    if (tree == NULL)
        return (0);
    else
    {
        if ((*tree).left != NULL || (*tree).right != NULL)
            checker = 1;
        lCount = binary_tree_nodes((*tree).left) + 1;
        rCount = binary_tree_nodes((*tree).right) + 1;
        return (lCount + rCount + checker);
    }
}

/**
 *   .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
*/