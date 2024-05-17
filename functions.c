#include "structs.h"

void	print_movie(struct s_movie movie)
{
	printf("\nTitle: %s\nDirector: %s\nDuration: %imin.\n",
		movie.title, movie.director, movie.duration_min);
}

void	set_movie_duration(struct s_movie *movie, int new_duration)
{
	movie->duration_min = new_duration;
}

void	print_all_movies(struct s_movie movies[])
{
	int	i;

	i = 0;
	while (movies[i].title[i] != '\0')
	{
		printf("\nTitle: %s\nDirector: %s\nDuration: %imin.\n",
			movies[i].title, movies[i].director, movies[i].duration_min);
		i++;
	}
}

void	p_print_all_movies(struct s_movie *movies)
{
	int	i;

	i = 0;
	while (movies[i].title[i] != '\0')
	{
		printf("\nTitle: %s\nDirector: %s\nDuration: %imin.\n",
			movies[i].title, movies[i].director, movies[i].duration_min);
		i++;
	}
}

char	*kai_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	if (!src)
		return (0);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
