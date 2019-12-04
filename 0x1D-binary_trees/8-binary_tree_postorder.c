#include "binary_trees.h"
/**
 * binary_tree_postorder - Entry point
 * @tree: the root of the binary tree
 * @func: a pointer to a function
 * Return: Nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
