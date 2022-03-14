
#include "push_swap.h"

void	ft_sort(t_list *a) //sort link list
{
	t_list	*j;

	while (a->next)
	{
		j = malloc(sizeof(t_list));
		if (j != NULL)
		{
			j->content = a->next->content;
			j->next = a->next->next;
		}
		while (j)
		{
			if (*(int *)j->content < *(int *)a->content)
				swap_tab(a->content, j->content);
			j = j->next;
		}
		a = a->next;
	}
}

t_list	*del_node(t_list *a, int position) //delete node of a linked list
{
	t_list	*temp;
	t_list	*del;
	int		i;

	i = 0;
	temp = a;
	if (position == 0)
	{
		a = a->next;
		temp->next = NULL;
		free(temp);
	}
	else
	{
		while (i < position - 1)
		{
			temp = temp->next;
			i++;
		}
		del = temp->next;
		temp->next = temp->next->next;
		del->next = NULL;
		free(del);
	}
	return(a);
}

void	ft_number(t_list *a) //number link list
{
	int	*x;
	int	n;

	n = 0;
	while (a)
	{
		printf("a->content = %d\n", *(int *)a->content);
		x = malloc(sizeof(int) * 1);
		if (x != NULL)
			*x = n;
		a->content = x;
		n++;
		a = a->next;
	}
}
