#include "binary_trees.h"
/**
 * binary_tree_inorder - Entry point
 * @tree: the root of the binary tree
 * @func: a pointer to a function
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
