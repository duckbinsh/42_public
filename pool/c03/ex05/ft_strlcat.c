/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:21:07 by mguy              #+#    #+#             */
/*   Updated: 2023/08/15 17:08:55 by mguy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				len;
	int				len_dest;
	unsigned int	i;

	i = 0;
	len = 0;
	len_dest = ft_strlen(dest);
	if (size <= ((unsigned int)ft_strlen(dest)))
		return (ft_strlen(src) + size);
	len = ft_strlen(dest);
	while (src[i] != '\0' && (len + i) < (size - 1))
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (len_dest + ft_strlen(src));
}
