#include "binary_trees.h"
/**
 * binary_tree_height - Entry point
 * @tree: a pointer to the root of the binary tree
 * Return: Always 0 (Success)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int l, r;

	if ((!tree) || (!tree->left && !tree->right))
		return (0);
	r = (binary_tree_height(tree->right) + 1);
	l = (binary_tree_height(tree->left) + 1);

	return (r > l ? r : l);
}
