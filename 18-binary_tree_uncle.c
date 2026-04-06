#include "binary_trees.h"

/**
 * binary_tree_uncle - Checks the uncle of a node
 * Meaning: It is the sibling of the parent
 * @node: the node to seek its uncle for
 * Return: checks if the uncle is right or left
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}
	/*If the parent is the left child of the grandparent*/
	if (node->parent == node->parent->parent->left)
	{
		return (node->parent->parent->right);
	}
	else
	{
	/*Otherwise, the parent is the right child, the uncle is the left child*/
		return (node->parent->parent->left);
	}
}
