#include "binary_trees.h"

void count_node(const binary_tree_t *tree, size_t *size);
/**
 * binary_tree_size - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: size of a binary tree, 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	count_node(tree, &size);
	return (size);
}

/**
 * count_node - goes through nodes in a binary tree using pre-order
 * traversal
 * @tree: pointer to node of a binary tree
 * @size: nodes count
 */
void count_node(const binary_tree_t *tree, size_t *size)
{
	if (!tree)
		return;
	*size = *size + 1;
	count_node(tree->left, size);
	count_node(tree->right, size);
}
