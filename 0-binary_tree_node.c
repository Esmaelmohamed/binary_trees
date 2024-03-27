#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: A pointer to the parent node of the node to create.
 * @value: The integer value to store in the new node.
 *
 * Description: This function creates a new binary tree node and initializes
 *              its values. It allocates memory for the new node, sets the
 *              value provided in the parameter, and assigns the parent
 *              pointer. The left and right child pointers are set to NULL.
 *
 * Return: If memory allocation fails or parent is NULL - NULL.
 *         Otherwise - a pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL)
        return (NULL);

    /* Initialize the new node's values */
    new_node->n = value;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;

    return (new_node);
}

