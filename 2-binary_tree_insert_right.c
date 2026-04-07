#include "binary_trees.h"

/**
 * binary_tree_insert_right - Function that inserts a node on the right
 * @parent: Points to the root of the tree
 * @value: Data stored in the node
 * Return: new_node (Node inserted)
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	/*Checking if the root of the tree exists*/
	if (parent == NULL)
	{
		return (NULL);
	}
	/*Allocating memory for the new node*/
	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	/*Building the new node*/
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	/*If the node to the right of parent isn't NULL*/
	if (parent->right != NULL)
	{
		/*The new node replaces it*/
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
