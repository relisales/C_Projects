/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relisalles <relisalles@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:20:11 by relisalles        #+#    #+#             */
/*   Updated: 2023/11/20 11:44:11 by relisalles       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(char c)
{

	if(c <=32 || c <= 126)
	{
		return 1;
	}
	return 0;
}
