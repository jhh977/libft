/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 21:33:23 by marvin            #+#    #+#             */
/*   Updated: 2025/06/23 21:33:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(int c)
{
	if((c >='a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >='0' && c <= '9'))
	{
		return 1;
	}
	return 0;
}