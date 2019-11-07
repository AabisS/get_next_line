/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mmultifd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarckma <fmarckma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 10:49:08 by fmarckma          #+#    #+#             */
/*   Updated: 2019/11/07 10:49:33 by fmarckma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int fd1 = open(argv[1], O_RDONLY);
	int fd2 = open(argv[2], O_RDONLY);
	char *line;
	int k = 1;
	int j = 1;

	while (k == 1)
	{
		k = get_next_line(fd1, &line);
		printf("%s\n", line);
		if (k >= 0)
		{
			free(line);
			line = NULL;
		}
	}
	while (j == 1)
	{
		j = get_next_line(fd2, &line);
		printf("%s\n", line);
		if (j >= 0)
		{
			free(line);
			line = NULL;
		}
	}
    return (0);
}
