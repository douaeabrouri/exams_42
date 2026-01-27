#include <stdio.h>


typedef struct s_list
{
	struct	s_list *data;
	void	*next
} t_list;

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int tmp;
	t_list *head;

	head = tmp;
	while(lst!= NULL && lst->next != NULL)
	{
		if((*cmp)(lst->data, lst->data->next) == 0)
		{
			tmp = lst->data;
			lst->data = lst->data->next;
			lst->data->next = tmp;
			lst = head;
		}
		else
			lst = lst->next;
	}
	return (head);
}