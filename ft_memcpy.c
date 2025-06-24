/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 18:50:07 by marvin            #+#    #+#             */
/*   Updated: 2025/06/24 18:50:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memcpy(void *dest, const void *src, unsigned long n)
{
	unsigned long			i;
	unsigned char*			d;
	const unsigned char*	s;

	i = 0;
	d = (unsigned char*)	dest;
	s = (const unsigned char*)	src;

	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}