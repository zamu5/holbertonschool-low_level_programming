#include "binary_trees.h"

/**
 * binary_tree_insert_right - Create a node on the rigth sond
 * @parent: parent of the current node
 * @value: value of the current node
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (new);
	new->parent = parent;
	new->n = value;
	new->left = NULL;
	if (parent->right)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	else
		new->right = NULL;
	parent->right = new;

	return (new);
}
