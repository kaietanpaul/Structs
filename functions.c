#include "structs.h"

int	movie_counter(char *buffer)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (buffer[i] != '\0')
	{
		if (buffer[i] == '\n')
			count++;
		i++;
	}
	return (count);
}

void	populate_struct(struct s_movie *t_movies, char *buffer, int movie_count)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;

	while (buffer[i] != '\0' && k < movie_count)
	{
		j = 0;
		while (buffer[i] != '\n' && buffer[i] != ',')
		{
			t_movies[k].title[j] = buffer[i];
			i++;
			j++;
		}
		t_movies[k].title[j] = '\0';
		i++;
		j = 0;
		while (buffer[i] != '\n' && buffer[i] != ',')
		{
			t_movies[k].director[j] = buffer[i];
			i++;
			j++;
		}
		t_movies[k].director[j] = '\0';
		i++;
		j = 0;
		t_movies[k].duration_min = 0;
		while (buffer[i] != '\n' && buffer[i] != ',' && buffer[i] != '\0')
		{
			t_movies[k].duration_min = t_movies[k].duration_min * 10 + (buffer[i] - '0');
			j++;
			i++;
		}
		if (buffer[i] == '\n') i++;
		k++;
		j = 0;
	}
}

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

void	p_print_all_movies(struct s_movie *movies, int movie_count)
{
	int	i;

	i = 0;
	while (i < movie_count)
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
