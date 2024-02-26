/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzuccare <vzuccare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:07:52 by vzuccare          #+#    #+#             */
/*   Updated: 2023/11/16 10:45:41 by vzuccare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	if ((c >= 97) && (c <= 122))
		return (1);
	if ((c >= 48) && (c <= 57))
		return (1);
	return (0);
}