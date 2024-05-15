// #include "structs.h"

// struct	s_movie
// {
// 	char	title[100];
// 	char	director[50];
// 	int		duration_min;
// };

// void	print_movie(struct s_movie movie)
// {
// 	printf("Title: %s\nDirector: %s\nDuration: %imin.\n",
// 		movie.title, movie.director, movie.duration_min);
// }

// void	set_movie_duration(struct s_movie *movie, int new_duration)
// {
// 	movie->duration_min = new_duration;
// }

// int	main(void)
// {
// 	struct s_movie	t_my_movie;

// 	kai_strcpy(t_my_movie.title, "Harry Potter and the Philosopher's Stone");
// 	kai_strcpy(t_my_movie.director, "Chris Columbus");
// 	t_my_movie.duration_min = 159;

// 	print_movie(t_my_movie);
// 	set_movie_duration(&t_my_movie, 213);
// 	print_movie(t_my_movie);
// 	return (0);
// }
