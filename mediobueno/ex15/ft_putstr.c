/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abermejo <abermejo.42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 15:48:45 by abermejo          #+#    #+#             */
/*   Updated: 2024/07/12 09:52:05 by abermejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;
	char	ch;

	i = 0;
	ch = str[i];
	while (ch != '\0')
	{
		ft_putchar(ch);
		ch = str[++i];
	}
}
/*
int main()
{
    // Ejemplos de cadenas de prueba
    char *str1 = "Hola, ";
    char *str2 = "mundo!";
    char *str3 = " Este es un ejemplo de cadena más larga.\n";

    // Llamadas a ft_putstr
    ft_putstr(str1);
    ft_putstr(str2);
    ft_putstr(str3);

    return 0;
}
*/
