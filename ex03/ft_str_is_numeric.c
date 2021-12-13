/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmiseren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 15:01:36 by gmiseren          #+#    #+#             */
/*   Updated: 2021/12/05 15:03:11 by gmiseren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	x;

	i = 0;
	x = 1;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			x = 0;
		i++;
	}
	return (x);
}
