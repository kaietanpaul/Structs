#include <stdio.h>

typedef struct s_order
{
	int		id;
	int		cost;
	char	desc[100];
}	t_order;

typedef struct s_customer
{
	char	name[50];
	int		id;
	char	*order_id;
}	t_customer;

typedef struct s_shop
{
	t_customer	*customers;
	t_order	*orders;
}	t_shop;

void	add_order(t_order *new_order, t_shop *shop)
{
	
}

int	main(void)
{

	return (0);
}
