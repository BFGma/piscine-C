#include <stdlib>
#include "ft_btree.h"

t_btree *btree_create_node(void *item)
{
	t_btree	*node;

	if (!(node = malloc(sizeof(node))))
		return (NULL);
	node->item = item;
	node->left = 0;
	node->right = 0;
	return (node);
} 
