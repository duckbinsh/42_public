/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alermolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:55:57 by alermolo          #+#    #+#             */
/*   Updated: 2023/08/28 18:03:02 by mguy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	if (str[0] == '\0')
		return (0);
	while (str[len])
		len++;
	return (len);
}
