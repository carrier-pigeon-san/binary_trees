#include "binary_trees.h"

void count_node(const binary_tree_t *tree, size_t *nodes);
/**
 * binary_tree_nodes - counts the nodes with at least one child in
 * a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: number of nodes in the binary tree with one-plus child, 0 if NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	count_node(tree, &nodes);
	return (nodes);
}

/**
 * count_node - goes through nodes in a binary tree using pre-order
 * traversal
 * @tree: pointer to node of a binary tree
 * @nodes: nodes count
 */
void count_node(const binary_tree_t *tree, size_t *nodes)
{
	if (!tree)
		return;
	if (tree->left || tree->right)
		(*nodes)++;
	count_node(tree->left, nodes);
	count_node(tree->right, nodes);
}
