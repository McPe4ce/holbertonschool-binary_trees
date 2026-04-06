#include "binary_trees.h"

/**
 * binary_tree_preorder - Runs through a tree, preorder way
 * @tree: Points to the root of the tree
 * @func: Pointer to the function to call each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	func(tree->n);
	binary_tree_preorder(tree->left, *func);
	binary_tree_preorder(tree->right, *func);
}
