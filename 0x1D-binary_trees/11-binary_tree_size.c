#include "binary_trees.h"
/**
 * binary_tree_size - Entry point
 * @tree: root of the binary tree.
 * Return: the size of binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
