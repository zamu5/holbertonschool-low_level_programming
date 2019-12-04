#include "binary_trees.h"

/**
 * binary_tree_depth - Entry point
 * @tree: root of the binary tree
 * Return: how depth are the node.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if ((!tree) || (!tree->parent))
		return (0);
	return (binary_tree_depth(tree->parent) + 1);
}
