#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: depth of the node of a binary tree, 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *token;
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	token = tree;
	while (token != NULL)
	{
		token = token->parent;
		depth++;
	}
	depth--;
	return (depth);
}
