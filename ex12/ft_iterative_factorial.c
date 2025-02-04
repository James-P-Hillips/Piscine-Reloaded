/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphillip <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 16:02:39 by jphillip          #+#    #+#             */
/*   Updated: 2024/12/18 17:55:35 by jphillip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	product;

	if (nb > 12)
		return (0);
	if (nb < 0)
		return (0);
	product = 1;
	while (nb >= 1)
	{
		product = product * nb;
		nb--;
	}
	return (product);
}
