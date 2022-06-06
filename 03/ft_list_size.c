int	ft_list_size(t_list *begin_list)
{
	t_list *node;
	node = begin_list;

	while (node)
	{
		node = node->next;
		count++;
	}
}
