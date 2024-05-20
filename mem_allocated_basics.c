// #include "structs.h"

// int	main(void)
// {
// 	struct s_movie	*t_movies;
// 	int	movies_count;

// 	movies_count = 3;
// 	t_movies = malloc(movies_count * sizeof(struct s_movie));

// 	if(!t_movies)
// 		return (-1);

// 	kai_strcpy(t_movies[0].title, "Movie1");
// 	kai_strcpy(t_movies[0].director, "Director1");
// 	t_movies[0].duration_min = 001;
// 	kai_strcpy(t_movies[1].title,"Movie2");
// 	kai_strcpy(t_movies[1].director, "Director2");
// 	t_movies[1].duration_min = 002;
// 	kai_strcpy(t_movies[2].title, "Movie3");
// 	kai_strcpy(t_movies[2].director, "Director3");
// 	t_movies[2].duration_min = 003;

// 	p_print_all_movies(t_movies);
// 	free(t_movies);
// 	return (0);
// }