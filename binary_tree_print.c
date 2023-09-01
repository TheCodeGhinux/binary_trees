#include "binary_tree.h"
#include <stdlib.h>

/*
 * print_t - To store each level recursively in an array of strings
 *
 * @tree: Pointer to the node
 * @offset: Offset to print
 * @depth: Depth of node
 * @s: Buffer of node
 *
 * Return: printed tree length
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return NULL;
	}

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	return new_node;
}

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return NULL;
	}

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
	{
		return NULL;
	}

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}

	parent->left = new_node;

	return new_node;
}

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return NULL;
	}

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
	{
		return NULL;
	}

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	parent->right = new_node;

	return new_node;
}
