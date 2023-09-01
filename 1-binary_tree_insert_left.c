#include "binary_trees.h"
#include <stdlib.h>

/**
 *binary_tree_insert_left - To create a binary node
 *	as a left child
 *@parent: Pointer to the parent of node to insert
 *@value: Value of new node
 *Return: Pointer of new node else Null on error
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}

	parent->left = new_node;

	return (new_node);
}
