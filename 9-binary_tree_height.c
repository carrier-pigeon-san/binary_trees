#include "binary_trees.h"

void count_level(const binary_tree_t *tree, size_t lvl, size_t *height);
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: height of a binary tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	count_level(tree, 0, &height);
	return (height);
}

/**
 * count_level - counts the levels of a binary tree
 * @tree: pointer to node of a binary tree
 * @lvl: level index
 * @height: height count
 */
void count_level(const binary_tree_t *tree, size_t lvl, size_t *height)
{
	if (!tree)
		return;
	*height = lvl > *height ? lvl : *height;
	count_level(tree->left, lvl + 1, height);
	count_level(tree->right, lvl + 1, height);
}
