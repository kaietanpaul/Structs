#include "structs.h"

void	print_movie(struct s_movie movie)
{
	printf("Title: %s\nDirector: %s\nDuration: %imin.\n",
		movie.title, movie.director, movie.duration_min);
}

void	set_movie_duration(struct s_movie *movie, int new_duration)
{
	movie->duration_min = new_duration;
}