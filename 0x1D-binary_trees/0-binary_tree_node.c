#include "binary_trees.h"
/**
 * binary_tree_node - Create a node of a binary tree
 * @parent: parent to the current node
 * @value: value for current node
 * Return: the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if(!new)
		return(new);
	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	return(new);
}
