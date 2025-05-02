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

void	ft_print_numbers(void)
{
	char	num;

	num = '0';
	while (num <= '9')
	{
		ft_putchar(num);
		++num;
	}
}
//int main(void)
//{
//    ft_print_numbers();
//    write(1, "\n", 1); // Para que quede limpio en la terminal
//    return 0;
//}
