/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarckma <fmarckma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 10:38:14 by fmarckma          #+#    #+#             */
/*   Updated: 2019/11/07 10:48:16 by fmarckma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main(int ac, char **av)
{
	int fd;
	char *line;
	int i = 0;

	if (ac== 1)
		fd = 0;
	else if (ac == 2)
		fd = open(av[1], O_RDONLY);
	else
		return (2);
	while (get_next_line(fd, &line) == 1)
	{
		i++;
		printf("%s\n", line);
		free(line);
	}
	printf("%s", line);
	free(line);
	printf("\nOn a fait %d tours\n", i);
	if (ac == 2)
		close(fd);
	return (0);
}
