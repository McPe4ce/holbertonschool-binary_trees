#include "binary_trees.h"

/**
 * binary_tree_height - Function that prints the height of a tree
 * @tree: Pöints to the beginning of the tree
 * Return: The height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
	{
		return (1 + (left_height));
	}
	else
	{
		return (1 + (right_height));
	}
}

/**
 * binary_tree_is_perfect - Function that checks if a tree is perfect
 * @tree: points to the tree
 * Return: if it is perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height, right_height, perfectleft, perfectright;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height != right_height)
	{
		return (0);
	}

	perfectleft = binary_tree_is_perfect(tree->left);
	perfectright = binary_tree_is_perfect(tree->right);

	return (perfectleft && perfectright);
}
