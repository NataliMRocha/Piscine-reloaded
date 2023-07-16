/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 19:47:04 by namoreir          #+#    #+#             */
/*   Updated: 2023/07/16 15:08:48 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#define BUF_SIZE 5000

int	ft_display_file(char *argv)
{
	char	buf[BUF_SIZE + 1];
	int		fd;
	int		rd;

	fd = open(argv, O_RDONLY);
	if (fd == -1)
		return (1);
	rd = read(fd, buf, BUF_SIZE);
	if (rd == -1)
	{
		close(fd);
		return (1);
	}
	write(1, buf, rd);
	if (close(fd) == 1)
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		write(1, "File name missing.\n", 19);
	if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	if (argc == 2)
		ft_display_file(argv[1]);
	return (0);
}
