/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 20:40:02 by lkhye-ya          #+#    #+#             */
/*   Updated: 2024/08/23 22:09:29 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_border(int x)
{
	char	corners;
	int		index;
	char	*str;
	char	content;

	corners = 'o';
	index = 0;
	content = '-';
	if (index == 0)
	{
		ft_putchar(corners);
		index++;
	}
	// ft_putchar(index + '0');
	// ft_putchar(x + '0');
	while (index && index != x - 1)
	{
		ft_putchar(content);
		index++;
	}
	if (index == x - 1)
	{
		ft_putchar(corners);
	}
}

void	print_body(int x, int y)
{
	char	line;
	int		index;

	line = '|';
	index = 0;
	if (y > 2)
	{
		ft_putchar(line);
		index++;
	}
	if (y = x - 1)
	{
		ft_putchar(line);
	}	
}

int main()
{
	print_border(5);
	print_body
	return(0);
}