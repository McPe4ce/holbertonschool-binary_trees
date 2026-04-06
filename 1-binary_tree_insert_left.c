#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function that inserts a node on the left
 * @parent: Points to the root of the tree
 * @value: Data stored in the node
 * Return: new_node (Node inserted)
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

	/*If the node to the left of parent isn't NULL*/
	if (parent->left != NULL)
	{
		/*The new node replaces it*/
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;

	return (new_node);
}
