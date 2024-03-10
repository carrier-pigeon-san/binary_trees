#include "binary_trees.h"

void count_level(const binary_tree_t *tree, int lvl, int *height);
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: balance factor of a binary tree, 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int abs_height_left = -1;
	int abs_height_right = -1;
	int bal_factor;

	if (tree == NULL)
		return (0);

	count_level(tree->left, 0, &abs_height_left);
	count_level(tree->right, 0, &abs_height_right);

	bal_factor = abs_height_left - abs_height_right;

	return (bal_factor);
}

/**
 * count_level - counts the levels of a binary tree
 * @tree: pointer to node of a binary tree
 * @lvl: level index
 * @height: height count
 */
void count_level(const binary_tree_t *tree, int lvl, int *height)
{
	if (!tree)
		return;
	*height = lvl > *height ? lvl : *height;
	count_level(tree->left, lvl + 1, height);
	count_level(tree->right, lvl + 1, height);
}
