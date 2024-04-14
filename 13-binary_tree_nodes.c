#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with child
 * @tree: pointer to root node
 * Return: 0
 */


size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	if (tree->right || tree->left)
		count += 1;
	count += binary_tree_nodes(tree->right);
	count += binary_tree_nodes(tree->left);
	return (count);
}
