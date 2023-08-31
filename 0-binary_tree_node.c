#include "binary_trees.h"
#include <stdlib.h>

/**
 *binary_tree_node - To create a binary tree node
 *@parent: Pointer to the parent of node
 *@value: Value of node
 *Return: Pointer of new node else Null on error
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);
	/* Return NULL on failure to allocate memory */

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
