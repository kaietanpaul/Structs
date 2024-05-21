#include "structs.h"

void	add_movie(struct s_movie *t_movies, int fd, char *title, char *director, char *duration)
{
	write(fd, "\n", 1);
	write(fd, title, strlen(title));
	write(fd, ",", 1);
	write(fd, director, strlen(director));
	write(fd, ",", 1);
	write(fd, duration, strlen(duration));
}

int	main(void)
{
	struct s_movie	*t_movies;
	char	buffer[500];
	int		read_bytes;
	int		movie_count;

	int		fd = open("movies.txt", O_RDWR | O_APPEND);
	if (!fd)
		printf("Open error");
	else
	{
		add_movie(t_movies, fd, "Dupa Dupa", "Polansky", "120");
		close(fd);
		int		fd = open("movies.txt", O_RDONLY);
		read_bytes = read(fd, buffer, sizeof(buffer));
		buffer[read_bytes] = '\0';
		movie_count = movie_counter(buffer);
		t_movies = malloc(movie_count *(sizeof(struct s_movie)));
		if (!t_movies)
			printf("Allocation error");
		else
		{
			populate_struct(t_movies, buffer, movie_count);
			p_print_all_movies(t_movies, movie_count);
			free(t_movies);
		}
	}
	close(fd);
	return (0);
}