/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanton-v <aanton-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 17:49:28 by aanton-v          #+#    #+#             */
/*   Updated: 2023/03/19 19:41:16 by aanton-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptrdest;
	const unsigned char	*ptrsrc;

	ptrdest = (unsigned char*)dest;
	ptrsrc = (unsigned char*)src;

	while(n--)
		*ptrdest++ = *ptrsrc++;
	return (dest);
}