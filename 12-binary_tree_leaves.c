#include "binary_trees.h"

void count_node(const binary_tree_t *tree, size_t *leaves);
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: number of leaves in the binary tree, 0 if NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	count_node(tree, &leaves);
	return (leaves);
}

/**
 * count_node - goes through nodes in a binary tree using pre-order
 * traversal
 * @tree: pointer to node of a binary tree
 * @leaves: leaves count
 */
void count_node(const binary_tree_t *tree, size_t *leaves)
{
	if (!tree)
		return;
	if (!tree->left && !tree->right)
		(*leaves)++;
	count_node(tree->left, leaves);
	count_node(tree->right, leaves);
}
