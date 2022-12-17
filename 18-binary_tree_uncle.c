#include "binary_trees.h"

/**
 * binary_tree_uncle - finds uncle of a node
 * @node: a pointer tonode to find uncle
 *
 * Return: pointer touncle node
 *         NULL if node is NULL
 *         NULL if parent is NULL
 *         NULL if node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - finds sibling of a node
 * @node: pointer tonode to find sibling
 *
 * Return: pointer tosibling node
 *         NULL if node is NULL
 *         NULL if parent is NULL
 *         NULL if node has no siblings
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
