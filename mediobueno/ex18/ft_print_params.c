/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abermejo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 11:31:22 by abermejo          #+#    #+#             */
/*   Updated: 2024/07/07 09:25:38 by abermejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (++i < argc)
	{
		j = -1;
		str = argv[i];
		while (str[++j] != '\0')
			ft_putchar(str[j]);
		ft_putchar('\n');
	}
	return (0);
}
