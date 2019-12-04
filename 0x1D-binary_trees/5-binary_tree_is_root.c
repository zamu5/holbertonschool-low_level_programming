#include "binary_trees.h"
/**
 * binary_tree_is_root - Entry point
 * @node: current node
 * Return: 1 If is a root node 0 if not
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
		return (1);
	return (0);
}
