#include <stdio.h>

struct	s_movie
{
	char	title[100];
	char	director[50];
	int		duration_min;
};

int	main(void)
{
	struct s_movie	t_my_movie;

	t_my_movie = (struct s_movie)
	{
		.title = "Harry Potter and the Philosopher's Stone",
		.director = "Chris Columbus",
		.duration_min = 159
	};
	return (0);
}
