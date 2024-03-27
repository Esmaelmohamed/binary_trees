#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t height = 0;

    if (tree == NULL)
        return (0);

    while (tree->parent != NULL)
    {
        height++;
        tree = tree->parent;
    }

    return (height);
}

