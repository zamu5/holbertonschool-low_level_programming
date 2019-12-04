#include "binary_trees.h"

/**
 * binary_tree_nodes - count nodes with a least a child
 * @tree: root of the tree.
 * Return: the number of nodes with a least a child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
