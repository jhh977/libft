/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 22:43:13 by marvin            #+#    #+#             */
/*   Updated: 2025/06/24 22:43:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *a, int toFind)
{
	char	c;
	int		i;
	int		j;

	i = 0;
	j = -1;
	c = (char) toFind;
	while (a[i] != '\0')
	{
		if (a[i] == c)
			j = i;
		i++;
	}
	if (c == '\0')
	{
		return ((char *)(a + i));
	}
	if (j == -1)
		return (0);
	return ((char *)(a + j));
}
