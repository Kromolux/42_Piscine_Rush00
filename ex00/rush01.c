/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufmann@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 17:42:58 by rkaufman          #+#    #+#             */
/*   Updated: 2021/10/03 21:50:52 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putchars(char c, int n);
void	draw_rect_top_line(int x, int y, char *c_pattern);
void	draw_rect_middle_line(int x, int y, char *c_pattern);
void	draw_rect_bottom_line(int x, int y, char *c_pattern);

void	rush(int x, int y)
{
	char	c_pattern[6];

	if (x > 0 && y > 0)
	{
		c_pattern[0] = '/';
		c_pattern[1] = '*';
		c_pattern[2] = '\\';
		c_pattern[3] = '*';
		c_pattern[4] = '\\';
		c_pattern[5] = '/';
		if (x == 1 && y == 1)
		{
			ft_putchar(c_pattern[0]);
			ft_putchar('\n');
		}
		else
		{
			draw_rect_top_line(x, y, c_pattern);
			draw_rect_middle_line(x, y, c_pattern);
			draw_rect_bottom_line(x, y, c_pattern);
		}
	}
}

void	draw_rect_top_line(int x, int y, char *c_pattern)
{
	int	i;

	if (x > 1)
	{
		ft_putchar(c_pattern[0]);
		ft_putchars(c_pattern[1], x - 2);
		ft_putchar(c_pattern[2]);
		ft_putchar('\n');
	}
	else if (x == 1 && y > 1)
	{
		ft_putchar(c_pattern[0]);
		ft_putchar('\n');
		i = 0;
		while (i < y - 2)
		{
			ft_putchar(c_pattern[1]);
			ft_putchar('\n');
			i++;
		}
		ft_putchar(c_pattern[2]);
		ft_putchar('\n');
	}
}

void	draw_rect_middle_line(int x, int y, char *c_pattern)
{
	int	i;

	if (x > 1 && y > 2)
	{
		i = 0;
		while (i < y - 2)
		{
			ft_putchar(c_pattern[3]);
			ft_putchars(' ', x - 2);
			ft_putchar(c_pattern[3]);
			ft_putchar('\n');
			i++;
		}
	}
}

void	draw_rect_bottom_line(int x, int y, char *c_pattern)
{
	if (x > 1 && y > 1)
	{
		ft_putchar(c_pattern[4]);
		ft_putchars(c_pattern[1], x - 2);
		ft_putchar(c_pattern[5]);
		ft_putchar('\n');
	}
}

void	ft_putchars(char c, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(c);
		i++;
	}
}
