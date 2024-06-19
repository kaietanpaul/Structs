#ifndef STRUCTS_H
# define STRUCTS_H

# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <string.h>

struct	s_movie
{
	char	title[100];
	char	director[50];
	int		duration_min;
};

char	*kai_strcpy(char *, char *);

void	print_movie(struct s_movie);
void	set_movie_duration(struct s_movie *, int);
void	print_all_movies(struct s_movie []);
void	p_print_all_movies(struct s_movie *, int);
void	populate_struct(struct s_movie *, char *, int);
int	movie_counter(char *);

#endif