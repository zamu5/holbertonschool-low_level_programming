#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert a new node on the left child
 * @parent: parent to the current node
 * @value:  value of the current node
 * Return: Always 0 (Success)
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (new);
	new->parent = parent;
	new->n = value;
	new->right = NULL;
	if (parent->left)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	else
		new->left = NULL;
	parent->left = new;

	return (new);
}
