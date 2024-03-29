void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *node;

	node = begin_list;
	while (node)
	{
		(*f)(node->data);
		node = node->next;
	}
}
