#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>

/* Struct definition for binary tree node */
typedef struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

/* Function prototypes */

/* Creates a binary tree node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* Inserts a node as the left child of another node */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/* Prints a binary tree */
void binary_tree_print(const binary_tree_t *);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);
#endif /* BINARY_TREES_H */

