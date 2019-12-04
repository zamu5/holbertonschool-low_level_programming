#include "binary_trees.h"
/**
 * binary_tree_is_leaf - look for a leaf node
 * @node: current node
 * Return: 1 if is a leaf node 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && (!node->left && !node->right))
		return (1);
	return (0);
}
