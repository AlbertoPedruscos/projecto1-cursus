/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abermejo <abermejo.42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 12:47:24 by abermejo          #+#    #+#             */
/*   Updated: 2024/07/14 13:15:29 by abermejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	result = 1;
	i = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
	{
		while (i <= nb)
		{
			result *= i;
			i++;
		}
		return (result);
	}
}
/*
#include <stdio.h>
int main(void) {
    int numeros[] = {0, 1, 2, 3, 4, 5, 10, 12, 20};
    int num_pruebas = sizeof(numeros) / sizeof(numeros[0]);

    for (int i = 0; i < num_pruebas; i++) {
        int numero = numeros[i];
        int factorial = ft_iterative_factorial(numero);

        printf("Factorial de %d es: %d\n", numero, factorial);
    }

    return 0;
}
*/
