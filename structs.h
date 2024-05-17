#ifndef STRUCTS_H
# define STRUCTS_H

# include <stdio.h>
struct	s_movie
{
	char	title[100];
	char	director[50];
	int		duration_min;
};
char	*kai_strcpy(char *dest, char *src);

void	print_movie(struct s_movie movie);
void	set_movie_duration(struct s_movie *movie, int new_duration);

#endif