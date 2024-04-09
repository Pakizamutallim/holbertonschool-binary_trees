#include "bianary_trees.h"

/**
 * bianary_tree_is_leaf - Checks if a node is a leaf of a bianary tree.
 * @node: A pointer to the node to check.
 *
 * Return: If the node is a leaf - 1.
 * Otherwise - 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if(node --NULL || node->right != NULL)
		return (0);
	return (1);
}
