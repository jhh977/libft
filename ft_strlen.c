/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 22:46:25 by marvin            #+#    #+#             */
/*   Updated: 2025/06/23 22:46:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *c)
{
    int s;

    s = 0;
    while(c[s] != '\0')
    {
        s++;
    }
    return (s);
}