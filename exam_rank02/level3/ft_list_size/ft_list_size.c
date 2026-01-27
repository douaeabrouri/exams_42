# include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
	int counter;

	counter = 0;
	while(begin_list)
	{
		begin_list = begin_list->next;
		counter++;
	}
	return (counter);
}

int main(void)
{

	t_list *head  = malloc(sizeof(t_list));
	t_list *node1 = malloc(sizeof(t_list));
	t_list *node2 = malloc(sizeof(t_list));
	t_list *node3 = malloc(sizeof(t_list));

	int *val1 = malloc(sizeof(int));
	int *val2 = malloc(sizeof(int));
	int *val3 = malloc(sizeof(int));
	int *val4 = malloc(sizeof(int));
	
	*val1 = 1;
	*val2 = 2;
	*val3 = 3;
	*val4 = 4;

	head->data = val1;
	head->next = node1;
	node1->data = val2;
	node1->next = node2;
	node2->data = val3;
	node2->next = node3;
	node3->data = val4;
	node3->next = NULL;

	printf("%d\n", ft_list_size(head));

	free(head);
	free(node1);
	free(node2);
	free(node3);
}