#include "ft_btree.h"

int		max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

int		btree_level_count(t_btree *root)
{
	int	count;

	count = 0;
	if (!root)
		return (0);
	if (root->left)
		count = max(count, btree_level_count(root->left));
	if (root->right)
		count = max(count, btree_level_count(root->right));
	return (count + 1);
}
